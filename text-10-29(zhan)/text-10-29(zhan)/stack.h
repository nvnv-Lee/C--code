#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>



typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

//初始化栈空间
void STInit(ST* ps);
//销毁栈空间
void STDestroy(ST* ps);
//将数字x压栈
void STPush(ST* ps, STDataType x);
//将栈顶数字弹出
void STPop(ST* ps);
//得到栈顶数字
STDataType STTop(ST* ps);
//得到占空间的数字个数
int STSize(ST* ps);
//检查栈空间是否为空
bool STEmpty(ST* ps);