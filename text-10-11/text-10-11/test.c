#define _CRT_SECURE_NO_WARNINGS 1


////����������
////һ���������� nums �����������֮�⣬�������ֶ����������Ρ���д�����ҳ�������ֻ����һ�ε����֡�Ҫ��ʱ�临�Ӷ���O(n)���ռ临�Ӷ���O(1)��
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
//	//�ҵ�res���������еڼ�λ��1
//	int target = 1;//��ʼλ0001
//	while ((target & p) == 0)
//	{//���target��һ��������λ��Ϊ1���ͽ�target����һλλ0010��Ȼ�������룬�ж�res�ڶ�λ�Ƿ�Ϊһ.����ѭ����֪���ҵ�ret�ĵ�һ��Ϊ1�Ķ�����λ
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
//	printf("ֻ����һ�ε�����Ϊ��%d %d\n",a,b);
//}
//
//int main()
//{
//	int nums[] = {0,0,1,1,2,2,3,4,5,5,6,6,7,7,8,8,9,9};
//	int numssize = sizeof(nums) / sizeof(nums[0]);
//	int p = Only_Once(nums, numssize);//ֻ����һ�εĵ������������Ľ��
//	printf("ֻ����һ�������������Ľ���ǣ�%d\n",p);
//	int target = Find_bitorder(p);
//	printf("�����������Ľ���Ķ�����λ�е�һ������1���ǣ�%d\n",target);
//	Divide_Grope(nums, numssize, target);
//	return 0;
//
//}
//



////ģ��ʵ��atoi
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
//enum State state = INVALID;//�Ϸ������һ�֣�����Ϊ�Ƿ����������жϽ�Ϊ����
//int my_atoi(const char* str)
//{
//	long long ret = 0;
//	int flag = 1;
//	assert(str);//str�ǿ�ָ��
//	if (*str == '\0')//�ж��Ƿ�Ϊ���ַ���
//	{
//		return 0;
//	}
//	while (isspace(*str))//�����հ��ַ�
//	{
//		str++;
//	}
//	if (*str == '+')//��������
//	{
//		str++;
//	}
//	else if (*str == '-')//��������
//	{
//		str++;
//		flag = -1;
//	}
//	while (isdigit(*str))//��ʼת�������ַ�ֱ���������ַ�
//	{
//		ret = ret * 10 + (*str - '0')*flag;
//		if ((ret > INT_MAX) || (ret < INT_MIN))//�ж��Ƿ�Խ��
//		{
//			return 0;
//		}
//		str++;
//	}
//	if (*str == '\0')//����ֹͣ
//	{
//		state = VALID;
//		return (int)ret;
//	}
//	else            //�����������ַ�
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






//�ҵ���
#include<stdio.h>
void finddog(int a[], int sz, int* num)
{
	int i = 0;
	int pos = 0;
	int ret = 0;
	//�������飬���������������һ�𣬽��Ϊ������ͬ�������
	for (i = 0; i < sz; i++)
	{
		ret ^= a[i];
	}
	//Ѱ����������ͬ���������һ��������λΪ 1 ��λ
	for (i = 0; i < 32; i++)
	{
		int pos = 0;
		if (((ret >> i) & 1) == 1)//���� 32 λ���ӵ�λ���λ���α���
		{
			pos = i;
			break;     //pos��¼������λΪ 1 ����
		}
	}
	//���ղ�ͬ��������
	for (i = 0; i < sz; i++)
	{
		//�ҵ�������posλΪ1���������������
		if (((a[i] >> pos) & 1) == 1)
		{
			num[1] ^= a[i];
		}
		//�ҵ�������posλΪ0���������������
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


