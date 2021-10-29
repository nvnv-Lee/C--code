#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"



//初始化栈空间
void STInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->capacity = ps->top = 0;//top等于0，相当于ps->top永远指向栈顶数据的下一个数据
}
//销毁栈空间
void STDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}
//将数字x压栈
void STPush(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		int newcapacity = ps->capacity == 0?4:ps->capacity * 2;
		STDataType* tmp = realloc(ps->a, sizeof(STDataType)*newcapacity);
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
//将栈顶数字弹出
void STPop(ST* ps)
{
	assert(ps);
	ps->top--;
}
//得到栈顶数字
STDataType STTop(ST* ps)
{
	assert(ps);
	assert(STEmpty(ps));
	return ps->a[ps->top - 1];
}
//得到栈空间的数字个数
int STSize(ST* ps)
{
	assert(ps);
	return ps->top;
}
//检查栈空间是否为空
bool STEmpty(ST* ps)
{
	assert(ps);
	return ps->top != 0;
}
