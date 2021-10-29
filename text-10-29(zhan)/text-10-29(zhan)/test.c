#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"


int main()
{
	ST st;
	//初始化栈空间
	STInit(&st);
	//将数字x压栈
	STPush(&st, 1);
	//将数字x压栈
	STPush(&st, 2);
	//将数字x压栈
	STPush(&st, 3);
	//将数字x压栈
	STPush(&st, 4);
	//将数字x压栈
	STPush(&st, 5);

	//得到栈顶数字
	STDataType* num = STTop(&st);
	printf("%d\n",num);
	//得到栈空间的数字个数
	int sz = STSize(&st);
	printf("%d\n",sz);

	//将栈顶数字弹出
	STPop(&st);
	//得到栈空间的数字个数
	sz = STSize(&st);
	printf("%d\n", sz);


	return 0;
}