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

//
//typedef struct st_type 
//{
//	int i;
//	int a[0];//���������Ա 
//}type_a;
//
//typedef struct st_type
//{
//	int i;
//	int a[];//���������Ա 
//}type_a;


//�ҵ���
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�
//
//#include <stdio.h>
//
//void search_of_dog(int* arr, int sz)
//{
//	int dog1 = 0;
//	int dog2 = 0;
//	//1.�ҳ����������� ���� ���������ֵ����
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= *(arr + i);
//	}
//
//	//2.����ret�еĶ�����Ϊ1��λ
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//
//	//3.���� ���ѵ�iλΪ1�ķ���һ�������һ�𣩣�
//	for (i = 0; i < sz; i++)
//	{
//		if (((*(arr + i) >> pos) & 1) == 1)
//		{
//			dog1 ^= *(arr + i);
//		}
//	}
//
//	//5 ^ 6 ^ 5 == 6 (�൱������5������)
//	dog2 = ret ^ dog1;
//
//	printf("%d %d\n", dog1, dog2);
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	search_of_dog(arr, sz);
//	return 0;
//}
//


//ģ��ʵ��strncpy();  //����ָ���������ַ���
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strncpy(char* dest, const char* src, size_t num)
//{
//    assert(dest && src);
//    char* ret = dest;
//    while (num--)
//    {
//        if (*src != '\0')
//        {
//            *dest++ = *src++;
//        }
//        else
//        {
//            *dest = '\0';
//            *dest++;
//        }
//    }
//    return ret;
//}
// 
//int main()
//{
//    char arr1[] = "abcdef";
//    char arr2[] = "holle";
//    char* ret = my_strncpy(arr1, arr2, 4);//ָ�������ַ��ĸ���
//    //���ָ���ĸ���Ϊ7,����arr2���ַ�����ʱ,Ĭ�Ϻ��油'\0', holle\0\0
//
//    printf("%s\n", ret);
//    return 0;
//}
//



//#include <stdio.h>
////�򿪺͹ر��ļ�
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ� - �������
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF) //��ȡ�ļ��е�����
//	{
//		printf("%c", ch);
//	}
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//#include <stdio.h>
////�򿪺͹ر��ļ�
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("E:\\1_C\\repos\\lianxiyong\\test_4_1\\test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ� - �������
//	char ch = 'a';
//	for (ch = 'a'; ch <= 'z'; ch++) //�� a~z д���ļ���
//	{
//		fputc(ch, pf);
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//
//#include <stdio.h>
//int main()
//{
//	int ch = fgetc(stdin);
//	printf("%c\n", ch);
//	fputc(ch, stdout);
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	char arr[256] = { 0 };
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ� - ��һ��
//	fgets(arr, 255, pf);  //������ Ŀ���ַ�� ������255 - 1�������� ���ļ���
//	printf("%s", arr);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//#include <stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//	double d;
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	//���ļ�
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fscanf(pf, "%s %d %lf", s.name, &(s.age), &(s.d));
//	//printf("%s %d %lf\n", s.name, s.age, s.d);
//	fprintf(stdout, "%s %d %lf\n", s.name, s.age, s.d);//�������׼�����(��Ļ)
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//#include <stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//	double d;
//};
//
//int main()
//{
//	char buf[256] = { 0 };
//	struct S s = { "zhangsan", 20, 95.5 };
//	struct S tmp = { 0 };
//	sprintf(buf, "%s %d %lf", s.name, s.age, s.d);
//	//printf("%s\n", buf);
//
//	//��buf�ַ�������ȡ�ṹ������
//	sscanf(buf, "%s %d %lf", tmp.name, &(tmp.age), &(tmp.d));
//	printf("%s %d %lf", tmp.name, tmp.age, tmp.d);
//	return 0;
//}
//
//

//
//
//#include <stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//	double d;
//};
//
//int main()
//{
//	struct S s = { "zhangsan", 20, 95.5 };
//	//д�ļ� - �����Ƶķ�ʽд
//	FILE* pf = fopen("test3.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//�����Ƶķ�ʽд�ļ� (������ļ���)
//	fwrite(&s, sizeof(struct S), 1, pf);//������������ʼ��ַ����С��������Ŀ���ļ�
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



#include <stdio.h>
struct S
{
	char name[20];
	int age;
	double d;
};

int main()
{
	struct S s = { 0 };
	//д�ļ� - �����Ƶķ�ʽд
	FILE* pf = fopen("test3.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//�����Ƶķ�ʽ�� (���ļ��е����ݶ��뵽�ڴ�������)
	fread(&s, sizeof(struct S), 1, pf);//������Ŀ�����ݵĵ�ַ����С��������Ҫ�����ļ�
	printf("%s %d %lf\n", s.name, s.age, s.d);
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}