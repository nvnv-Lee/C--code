#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("data.txt","r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//���ļ�
//	//�����д
//	//�����һ�ξ�Ҫ��ȡ��c��
//	fseeek(pf, 2, SEEK_SET);
//	int ch = fgetc(pf);
//	printf("%c\n",ch);
//
//	fseeek(pf, -2, SEEK_CUR);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//�����ļ�ָ���������ʼλ��ƫ����
//	int ret = ftell(pf);
//	printf("%d\n",ret);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//
//int main()
//{
//	char* p = "hello ""bit\n";
//	printf("hello","bit\n");
//	printf("%s",p);
//	return 0;
//}





#define  MAX(a,b) ((a)>(b)?(a):(b))
int main()
{
	int x = 5;
	int y = 8;
	int z = MAX(x++, y++);
	printf("x=%d y=%d z=%d\n",x,y,z);
	return 0;
}