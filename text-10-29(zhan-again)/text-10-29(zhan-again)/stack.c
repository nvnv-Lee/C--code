#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"





//初始化栈
void STInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}
//销毁栈
void STDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}
//压栈
void STPush(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType tmp = realloc(ps->a, sizeof(STDataType)*newcapacity);
		if (tmp == NULL)
		{
			perror("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}

	ps->a[ps->top] = x;
	ps->top++;
}
//将栈顶数据弹出
void STPop(ST* ps)
{
	assert(ps);
	assert(!STEmpty(ps));
	ps->top--;
}
//得到栈顶数据
STDataType STTop(ST* ps)
{
	assert(ps);
	return ps->a[ps->top - 1];
}
//得到栈的大小
int STSize(ST* ps)
{
	assert(ps);
	return ps->top;
}
//判断栈是否为空
bool STEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}