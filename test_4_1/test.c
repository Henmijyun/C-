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


////ģ��ʵ��strncpy();  //����ָ���������ַ���
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
//	//д�ļ� - �����Ƶķ�ʽд
//	FILE* pf = fopen("test3.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//�����Ƶķ�ʽ�� (���ļ��е����ݶ��뵽�ڴ�������)
//	fread(&s, sizeof(struct S), 1, pf);//������Ŀ�����ݵĵ�ַ����С��������Ҫ�����ļ�
//	printf("%s %d %lf\n", s.name, s.age, s.d);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


////ģ��ʵ��strncat
//#include <stdio.h>
//#include <assert.h>
//char* my_strncat(char* dest, const char* src, size_t num)
//{
//    assert(dest && src);
//    char* ret = dest;
//    while (*dest) //��Ŀ��ռ��\0
//    {
//        dest++;
//    }
//    while (num--) //��\0λ�ÿ�ʼ���ƹ�ȥ
//    {
//        *dest++ = *src++;
//    }
//    return ret;
//}
//int main()
//{
//    char arr1[20] = "abcdef";//ȷ��Ŀ��ռ��С�ܷ���
//    char arr2[] = "holle";
//    char* ret = my_strncat(arr1, arr2, 3);//ָ��׷���ַ��ĸ���
//    printf("%s\n", ret);
//    return 0;
//}


//atoi() ��������
// ���ַ�����������ַ�ת��Ϊ��������
//ֱ���������ֻ��������Ųſ�ʼ��ת�����������������ֻ��ַ�������ʱ('/0')�Ž���ת��
//ԭ��Ϊ��int atoi(const char* str);

//#include <stdio.h>
//#include <assert.h>
//
//int my_atoi(const char* str)
//{
//	assert(str);
//	char tmp = 0;
//	int ret = 0;
//	while ((*str != '+') && (*str != '-') && (*str < '0') && (*str > '9'))
//	{
//		str++; //����ʼλ��
//	}
//	if (*str == '\0')
//	{
//		return 0; //�Ҳ���
//	}
//	if (*str == '+' || *str == '-')
//	{
//		tmp = *str; //�ҵ���'+'����'-' ,��¼����
//		str++;
//	}
//	
//	//������strһ��ָ������, ת��
//	while ((*str >= '0') && (*str <= '9'))
//	{
//		ret *= 10;
//		ret += *str - '0';  //ÿ��ѭ����λ , �Ӹ�λ��ֵ
//		str++;
//	}
//	
//	//����ڷ���ʱ, �ӷ���
//	if (tmp == '+')
//		return ret;
//	else
//		return 0 - ret;
//}
//
//int main()
//{
//	char arr[] = "-1105abc";
//	int i = 0;
//	i = my_atoi(arr);
//	printf("%d\n", i);
//	return 0;
//}




//#include <stdio.h>
//
//int main()
//{
//	//д�ļ� - �����Ƶķ�ʽд
//	FILE* pf = fopen("test3.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���д��
//	fputc('a', pf);
//	fputc('b', pf);
//	fputs("cdefg\n", pf);
//	fputs("hijkl\n", pf);
//
//	fseek(pf, -3, SEEK_CUR); //��λ�ļ�ָ��
//	fputs("XXXX", pf);
//	//SEEK_CUR - �ļ�ָ�뵱ǰ��λ��
//	//SEEK_END - �ļ�ĩβ��λ��
//	//SEEK_SET - �ļ���ʼ��λ��
//
//
//	long pos = ftell(pf); //�����ļ�ָ���������ʼλ�õ�ƫ����
//	printf("%ld\n", pos);
//
//	rewind(pf); //�ļ�ָ���λ�ûص��ļ�����ʼλ��
//
//	pos = ftell(pf);
//	printf("%ld\n", pos);
//	
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
////

//дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ������

//#define
//#include <assert.h>
//#include <stdlib.h>
//void SLiistPopBack(SLTNode** pphead) //����βɾ
//{
//	assert(*pphead);
//
//	if ((*pphead)->next == NULL)
//	{
//		free(*pphead);
//		*pphead = NULL;
//		return;
//	}
//
//	SLTNode* tail = *pphead;
//	while (tail->next->next != NULL)
//	{
//		tail = tail->next;
//	}
//	free(tail->next);
//	tail->next = NULL;
//}


//#include <assert.h>
//
//int removeElement(int* nums, int numsSize, int val) {
//    //������˫ָ�룬һ��ָ��ͷ��һ��ָ��β���������м��ƶ���ÿ���ƶ����жԱȡ�
//    assert(nums);
//    int* left = nums;
//    int* right = &nums[numsSize - 1];
//    int newSize = 0;
//
//    while (left < right)
//    {
//        while (*right == val)
//        {
//            right--;
//            if (right < left)
//                return 0;
//        }
//
//        if (*left == val)
//        {
//            int tmp = *right;
//            *right = *left;
//            *left = tmp;
//        }
//        left++;
//        newSize += 1;
//    }
//    return newSize;
//}
//
//int main()
//{
//    int nums[] = { 3 };
//    int numsSize = sizeof(nums) / sizeof(nums[0]); 
//    int val = 2;
//    int ret = removeElement(nums, numsSize, val);
//
//    return 0;
//
//}



////#define
////���峣�� �� �����
//
//#define MALLOC(num ,type)  (type*)malloc(num*sizeof(type))
////
//
////	int*p = (int*)malloc(10 * sizeof(int));
////	int*p2 = MALLOC(10, int);
////  p == p2



////дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ������
//
//#include <stdio.h>
//#define SWAP(num) (num = ((num & 0x55555555)<<1) + ((num & 0xaaaaaaaa)>>1))
//
////0x55555555    01010101 01010101 01010101 01010101    �ֱ�ȡ�� ����λ��ż��λ�� 1
////0xaaaaaaaa    10101010 10101010 10101010 10101010
//int main()
//{
//	int num = 10;
//	//00000000 00000000 00000000 00001010  ����ǰ
//	//00000000 00000000 00000000 00000101  ������
//	SWAP(num);
//	printf("%#x\n", num);  //���0x5  00000101
//	return 0;
//}


//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
#include <stdio.h>

struct S
{
	int a;
	char c;
	double d;
};

#define  OFFSETOF(st_type, mem_name)  (size_t)&(((st_type*)0)->mem_name)

//�����׵�ַ���Ǵ�0��ʼ��,�ǿ��԰�0ǿתΪst_type*, ָ���Աmen_name,
//Ȼ���ָ��ĵ�ַ����& ȡ��ַ���������ǿתΪsize_t���ͣ��Ϳ��Դ�ӡ�����Ӧ��ƫ�Ƶ�ַλ��

int main()
{
	printf("%d\n", OFFSETOF(struct S, a)); //0
	printf("%d\n", OFFSETOF(struct S, c));  //4
	printf("%d\n", OFFSETOF(struct S, d));  //8

	return 0;
}