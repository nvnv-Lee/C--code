#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

// ��N�����ҳ�����ǰK��  or  ��N�����ҳ���С��ǰK��
void PrintTopK(int* a, int n, int k)
{
	HP hp;
	HeapInit(&hp);
	// ����һ��K������С��
	for (int i = 0; i < k; ++i)
	{
		HeapPush(&hp, a[i]);
	}

	// ʣ�µ�N-K�������Ѷ������ݱȽϣ������󣬾��滻������
	for (int i = k; i < n; ++i)
	{
		if (a[i] > HeapTop(&hp))
		{
			//HeapPop(&hp);
			//HeapPush(&hp, a[i]);
			hp.a[0] = a[i];
			AdjustDown(hp.a, hp.size, 0);
		}
	}

	HeapPrint(&hp);

	HeapDestroy(&hp);
}

void TestTopk()
{
	int n = 1000000;
	int* a = (int*)malloc(sizeof(int)*n);
	srand(time(0));
	for (size_t i = 0; i < n; ++i)
	{
		a[i] = rand() % 1000000;
	}
	// ��ȥ����10����100w�����
	a[5] = 1000000 + 1;
	a[1231] = 1000000 + 2;
	a[5355] = 1000000 + 3;
	a[51] = 1000000 + 4;
	a[15] = 1000000 + 5;
	a[2335] = 1000000 + 6;
	a[9999] = 1000000 + 7;
	a[76] = 1000000 + 8;
	a[423] = 1000000 + 9;
	a[3144] = 1000000 + 10;
	PrintTopK(a, n, 10);
}

void TestHeap()
{
	int a[] = { 70, 56, 30, 25, 15, 10, 75 };
	HP hp;
	HeapInit(&hp);
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
	{
		HeapPush(&hp, a[i]);
	}
	HeapPrint(&hp);

	HeapPop(&hp);
	HeapPrint(&hp);

	HeapPop(&hp);
	HeapPrint(&hp);

	HeapPop(&hp);
	HeapPrint(&hp);

	HeapPop(&hp);
	HeapPrint(&hp);

	HeapDestroy(&hp);
}

// ����  �ռ临�Ӷ��Ƕ���? Ҫ���Ż���O(1) -> ������Heap
//void HeapSort(int* a, int n)
//{
//	HP hp;
//	HeapInit(&hp);
//	// ����һ��N��С��
//	for (int i = 0; i < n; ++i)
//	{
//		HeapPush(&hp, a[i]);
//	}
//
//	// Pop N ��
//	for (int i = 0; i < n; ++i)
//	{
//		a[i] = HeapTop(&hp);
//		HeapPop(&hp);
//	}
//
//	HeapDestroy(&hp);
//}

void HeapSort(int* a, int n)
{
	// ֱ�Ӱ�a�����ɶѣ�ֱ�ӿ���a����
}

int main()
{
	//TestTopk();
	int a[] = { 70, 56, 30, 25, 15, 10, 75 };
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	HeapSort(a, sizeof(a) / sizeof(a[0]));

	for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
