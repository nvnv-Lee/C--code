#define _CRT_SECURE_NO_WARNINGS 1


////单身狗方法二
////一个整型数组 nums 里除两个数字之外，其他数字都出现了两次。请写程序找出这两个只出现一次的数字。要求时间复杂度是O(n)，空间复杂度是O(1)。
//#include <stdio.h>
//int Only_Once(int* nums,int numssize)
//{
//	int res =0;
//	
//	int i = 0;
//	for (i = 0; i < numssize; i++)
//	{
//		res = res ^ nums[i];
//	}
//	return res;
//}
//int Find_bitorder(p)
//{
//	//找到res二进制数中第几位是1
//	int target = 1;//初始位0001
//	while ((target & p) == 0)
//	{//如果target第一个二进制位不为1，就将target左移一位位0010，然后与相与，判断res第二位是否为一.按此循环，知道找到ret的第一个为1的二进制位
//		target = target << 1;
//	}
//	return target;
//}
//void Divide_Grope(int* nums,int numssize,int target)
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	for (i = 0; i < numssize; i++)
//	{
////if (((a[i] >> pos) & 1) == 1)
////{
////	num[1] ^= a[i];
////}
//		if (target == (target&nums[i]))
//		{
//			a = a^nums[i];
//		}
//		else
//		{
//			b = b^nums[i];
//		}
//	}
//	printf("只出现一次的数字为：%d %d\n",a,b);
//}
//
//int main()
//{
//	int nums[] = {0,0,1,1,2,2,3,4,5,5,6,6,7,7,8,8,9,9};
//	int numssize = sizeof(nums) / sizeof(nums[0]);
//	int p = Only_Once(nums, numssize);//只出现一次的的两个数字异或的结果
//	printf("只出现一次两个数字异或的结果是：%d\n",p);
//	int target = Find_bitorder(p);
//	printf("两个数字异或的结果的二进制位中第一个出现1的是：%d\n",target);
//	Divide_Grope(nums, numssize, target);
//	return 0;
//
//}
//



////模拟实现atoi
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include <ctype.h>
//
//enum State
//{
//	VALID,//0
//	INVALID//1
//};
//enum State state = INVALID;//合法情况就一种，先判为非法，接下来判断较为方便
//int my_atoi(const char* str)
//{
//	long long ret = 0;
//	int flag = 1;
//	assert(str);//str是空指针
//	if (*str == '\0')//判断是否为空字符串
//	{
//		return 0;
//	}
//	while (isspace(*str))//跳过空白字符
//	{
//		str++;
//	}
//	if (*str == '+')//跳过正号
//	{
//		str++;
//	}
//	else if (*str == '-')//跳过负号
//	{
//		str++;
//		flag = -1;
//	}
//	while (isdigit(*str))//开始转换数字字符直到非数字字符
//	{
//		ret = ret * 10 + (*str - '0')*flag;
//		if ((ret > INT_MAX) || (ret < INT_MIN))//判断是否越界
//		{
//			return 0;
//		}
//		str++;
//	}
//	if (*str == '\0')//正常停止
//	{
//		state = VALID;
//		return (int)ret;
//	}
//	else            //遇到非数字字符
//	{
//		state = VALID;
//		return (int)ret;
//	}
//}
//int main()
//{
//	char* p = "  -12345abc678";
//	int ret = my_atoi(p);
//	if (state == VALID)
//	{
//		printf("%d\n", ret);//-12345
//	}
//	return 0;
//}






//找单身狗
#include<stdio.h>
void finddog(int a[], int sz, int* num)
{
	int i = 0;
	int pos = 0;
	int ret = 0;
	//遍历数组，把所有数字异或在一起，结果为两个不同数的异或。
	for (i = 0; i < sz; i++)
	{
		ret ^= a[i];
	}
	//寻找这两个不同数异或结果的一个二进制位为 1 的位
	for (i = 0; i < 32; i++)
	{
		int pos = 0;
		if (((ret >> i) & 1) == 1)//整型 32 位，从低位向高位依次遍历
		{
			pos = i;
			break;     //pos记录二进制位为 1 的数
		}
	}
	//按照不同的数分组
	for (i = 0; i < sz; i++)
	{
		//找到数组中pos位为1的数，并进行异或
		if (((a[i] >> pos) & 1) == 1)
		{
			num[1] ^= a[i];
		}
		//找到数组中pos位为0的数，并进行异或
		else
		{
			num[0] ^= a[i];
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 2, 1, 3 };
	int num[2] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	finddog(arr, sz, num);
	printf("%d %d\n", num[0], num[1]);
	return 0;
}


