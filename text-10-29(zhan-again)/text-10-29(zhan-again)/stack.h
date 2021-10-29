#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int STDataType;


typedef struct Stack
{
	STDataType* a;
	int capacity;
	int top;
}ST;

//初始化栈
void STInit(ST* ps);
//销毁栈
void STDestroy(ST* ps);
//压栈
void STPush(ST* ps, STDataType x);
//将栈顶数据弹出
void STPop(ST* ps);
//得到栈顶数据
STDataType STTop(ST* ps);
//得到栈的大小
int STSize(ST* ps);
//判断栈是否为空
bool STEmpty(ST* ps);
