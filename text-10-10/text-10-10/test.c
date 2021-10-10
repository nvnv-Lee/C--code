#define _CRT_SECURE_NO_WARNINGS 1






////数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？
////一道题有多种解决方法，那么我们不用事先实现，只需要分析出每种方法的复杂度，选择复杂度优的方式即可，这就是复杂度在实际中的意义
//
//
////思路一：排序——>qsort快排——>时间复杂度为：O(n*log2  N)
//
//
//
//
//
//
////思路二：（0+1+2+3+4+5+......+n）-（a[0]+a[1]+a[2]+.......+a[n-1]）
//          //时间复杂度为：O(N)          空间复杂度为：O（1）
//
//
//
//
//
//
////思路三：数组中的值是几就在第几个位置写下这个值     0  1  2  3  4..........n
//        //时间复杂度为：O(N)          空间复杂度为：O(N)
//
//
//
//
//
//
//
////思路四：给一个值x=0
//        //x先跟[0,n]的所有值异或（异或存在交换律和结合律，所以连续异或，随便交换顺序无所谓）（相同为0，相异为）（0与任何数异或不改变那个数的值）         时间复杂度为：O（n）
//        //x再跟数组中的每个值异或        最后x就是缺的那个数字
#include<stdio.h>
int missingNumber(int* nums, int numsSize)
{
	int i = 0;//nums中的下标位置
	int res = numsSize;//不能是0，否则多按位异或一次0
	for (i = 0; i < numsSize; i++)
	{
		res = res ^i ^ nums[i];
	}
	return res;
}
int main()
{
	int num[] = { 5, 4, 3, 1, 2, 6, 7, 9, 0 };
	int n = sizeof(num) / sizeof(num[0]);//求numsSize                                                   
	int p = missingNumber(num, n);
	printf("缺失的数字是：%d\n", p);
	return 0;
}










////给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。
//
////进阶：
////尽可能想出更多的解决方案，至少有三种不同的方法可以解决这个问题。你可以使用空间复杂度为 O(1) 的 原地 算法解决这个问题吗？
//
////思路一：暴力求解，旋转K次
//
//
//
//
//
////逆置
//#include <stdio.h>
//void Reverse(int* nums,int left,int right)
//{
//	while (left < right)
//	{
//		int tmp = nums[left];
//		nums[left] = nums[right];
//		nums[right] = tmp;
//		++left;
//		--right;
//	}
//}
//void rotate(int* nums, int numsSize, int k)
//{
//  //if(k>=numsSize)
//         //k%=numsSize;
//	//前n-k个数逆置
//	Reverse(nums, 0, numsSize - k - 1);
//	//后k个数逆置
//	Reverse(nums, numsSize - k, numsSize-1);
//	//整体逆置
//	Reverse(nums, 0, numsSize - 1);
//}
//int main()
//{
//		int nums[] = { 0,1,2,3,4,5,6,7,8,9 };
//		int numsSize = sizeof(nums) / sizeof(nums[0]);//求numsSize    
//		int k = 4;
//		rotate(nums, numsSize, k);
//		int i = 0;
//		for (i = 0; i < numsSize; i++)
//		{
//			printf("%d ", nums[i]);
//		}
//		return 0;
//}