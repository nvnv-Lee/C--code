#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"






int main()

{
	//创建一个栈
	ST st;
	//初始化栈
	STInit(&st);
	//压栈
	STPush(&st, 1);
	////得到栈顶数据
	//STDataType num = STTop(&st);
	//printf("%d ",num);
	//将栈顶数据弹出
	STPop(&st);
	//压栈
	STPush(&st, 1);
	//压栈
	STPush(&st, 2);
	//压栈
	STPush(&st, 3);
	//压栈
	STPush(&st, 4);
	//压栈
	STPush(&st, 5);





	//销毁栈
	STDestroy(&st);

	return 0;
}