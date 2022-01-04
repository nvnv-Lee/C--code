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
			HeapPop(&hp);
			HeapPush(&hp, a[i]);
			//hp.a[0] = a[i];
			//AdjustDown(hp.a, hp.size, 0);
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

// ����  �ռ临�Ӷ��Ƕ���? O(N) Ҫ���Ż���O(1) -> ������Heap
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

// ����
void HeapSort(int* a, int n)
{
	// ��a������С��
	// ����1��
	/*for (int i = 1; i < n; ++i)
	{
	AdjustUp(a, i);
	}*/

	// ����2��
	// O(N)
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(a, n, i);
	}

	// ����ѡ��������
	// O(N*logN)
	for (int end = n - 1; end > 0; --end)
	{
		Swap(&a[end], &a[0]);

		// �ٵ��ѣ�ѡ����С����
		AdjustDown(a, end, 0);
	}
}

//int main()
//{
//	//TestTopk();
//	int a[] = { 70, 56, 30, 25, 15, 10, 75, 33, 50, 69 };
//	for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//
//	HeapSort(a, sizeof(a) / sizeof(a[0]));
//
//	for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

typedef char BTDataType;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

BTNode* BuyNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	node->data = x;
	node->left = node->right = NULL;
	return node;
}

BTNode* CreatBinaryTree()
{
	BTNode* nodeA = BuyNode('A');
	BTNode* nodeB = BuyNode('B');
	BTNode* nodeC = BuyNode('C');
	BTNode* nodeD = BuyNode('D');
	BTNode* nodeE = BuyNode('E');
	BTNode* nodeF = BuyNode('F');

	nodeA->left = nodeB;
	nodeA->right = nodeC;
	nodeB->left = nodeD;
	nodeC->left = nodeE;
	nodeC->right = nodeF;

	return nodeA;
}

// ������ǰ����� 
void PreOrder(BTNode* root)
{
	if (root == NULL){
		printf("NULL ");
		return;
	}

	printf("%c ", root->data);
	PreOrder(root->left);
	PreOrder(root->right);
}

// �������������
void InOrder(BTNode* root)
{
	if (root == NULL){
		printf("NULL ");
		return;
	}

	InOrder(root->left);
	printf("%C ", root->data);
	InOrder(root->right);
}

// �������������
void PostOrder(BTNode* root);

// �������ڵ����
// ��������˼�룺��ε��ô�������
//int BinaryTreeSize(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//
//	static int count = 0;
//
//	++count;
//	BinaryTreeSize(root->left);
//	BinaryTreeSize(root->right);
//
//	return count;
//}

//void BinaryTreeSize(BTNode* root, int* pn)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//
//	++(*pn);
//	BinaryTreeSize(root->left, pn);
//	BinaryTreeSize(root->right, pn);
//}

int BinaryTreeSize(BTNode* root)
{
	return root == NULL ? 0 :
		BinaryTreeSize(root->left)
		+ BinaryTreeSize(root->right)
		+ 1;
}

int main()
{
	BTNode* root = CreatBinaryTree();
	PreOrder(root);
	printf("\n");
	InOrder(root);
	printf("\n");

	/*int n1 = 0;
	BinaryTreeSize(root, &n1);
	printf("TreeSize:%d\n", n1);

	int n2 = 0;
	BinaryTreeSize(root, &n2);
	printf("TreeSize:%d\n", n2);*/

	printf("TreeSize:%d\n", BinaryTreeSize(root));


	return 0;
}
