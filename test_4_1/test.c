#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdlib.h>
//
//int main()
//{
//	int* ptr = (int*)malloc(10* sizeof(int));
//	if (NULL != ptr)
//	{
//		//ʹ�ÿռ�
//		//..
//	}
//	//��չ����
//	int* ptr2 = (int*)realloc(ptr, 100 * sizeof(int));
//	if (NULL != ptr2)
//	{
//		//��ֹptr����ΪNULL�����¿ռ䶪ʧ
//		ptr = ptr2;
//		ptr2 = NULL;
//	}
//	else
//		perror("realloc");
//	//ʹ�ÿռ�
//	//..
//	//�黹�ռ�
//	free(ptr);
// 	ptr = NULL;
//	return 0;
//}
//
//
//


typedef struct st_type 
{
	int i;
	int a[0];//���������Ա 
}type_a;

typedef struct st_type
{
	int i;
	int a[];//���������Ա 
}type_a;