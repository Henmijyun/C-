#define _CRT_SECURE_NO_WARNINGS 1
//ָ��
//int main()
//{
//	int a = 10; 
//	int* p = &a;//pΪָ���������ŵ�ַ�ı���-->ָ�����, ָ����ǵ�ַ
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));//����4���ֽ�,��ΪʲôҪ����������???
//	//printf("%d\n", sizeof(int*)); 
//	//printf("%d\n", sizeof(double*));
//
//	int a = 0x11223344; //4���ֽ�44 33 22 11
//	int* pa = &a;
//	//*pa = 0;    //��4���ֽڸ�Ϊ00; 00 00 00 00 (�����������)
//
//	char* pc = &a;
//	//*pc = 0;     //��1���ֽڸ�Ϊ00;  00 33 22 11 (�����������)
//	printf("%p\n", pa);
//	printf("%p\n", pc);//%p��ӡ��ַ,������Ȼ�о���,����û�б���,������.��ΪʲôҪ����������???
//
//
//	printf("%d\n", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);      //003FF854
//	printf("%p\n", pa + 1);  //003FF858  ��1����4���ֽ�
//
//	printf("%p\n", pc);       //003FF854
//	printf("%p\n", pc + 1);  //003FF855  ��1����1���ֽ�
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//������ - ��Ԫ�صĵ�ַ  int*���Ըĵ�10������Ԫ��
//
//	//char* p = arr; //��char*ֻ�ܸ�10���ֽ�
//
//	//��������ÿһ��Ԫ�ض��ó� 1
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1; //������p��+i����*�����õõ���ַ,�ٸ���ַ��ֵ;
//	}
//	return 0;
//}

//int main()
//{
//	//int a;//�ֲ���������ʼ��,Ĭ�������ֵ;
//	int* p;//�ֲ���ָ�����,�ͱ���ʼ��Ϊ���ֵ;
//	*p = 20;
//	//������������ҵ�һ���ռ�p,���ǷǷ���,��Ұָ��;
//	//����ռ��20,�����������..
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*(p++) = i; //arrֻ��10��Ԫ��,����ѭ��11��,���������鷶Χ;
//	}
//	//�������鷶Χ�Ŀռ�λ��Ҳ�ᱻ��ֵ,��Ҳ��Ұָ��;
//	return 0;
//}
//
//int* test() 
//{
//	int a = 10; //a�ں���������ʱ������,��������֮��a�ͻ���ʧ,�Ӷ��ͷ�a�Ŀռ�
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;  //����*�����õĵ�ַ,���Ѿ���ʧa֮��,���ͷſռ�ĵ�ַ,�ǵ�����,δ֪�ĵ�ַ;
//	return 0;
//}
////�ռ䱻�ͷź�,������ָ��ĵ�ַ,Ҳ��Ұָ��;
//
//#include<stdio.h>
//int main()
//{
//	//��ǰ��֪��pӦ�ó�ʼ��ʲô��ַ��ʱ��,ֱ�ӳ�ʼ��ΪNULL
//	int* p = NULL; //NULL�ǿ⺯��<stdio.h>�����,�ǿհ׵���˼.
//
//	//c���Ա����ǲ��������ݵ�Խ����Ϊ��,�����Լ�Ҫע��
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int* p = NULL;//�����ָ������Ϊ��ָ��,��ָ����û�з���������û���,����ֱ��ʹ������;
//	//*p = 10;  //����ĸ�ֵ����Ч�ĸ�ֵ;
//
//	//�ж�ָ�����Ч��
//	if (p != NULL)
//	{
//		*p = 10;//�����ж����,�Ϳ���ȷ��ָ�����Ч��
//	}
//	return 0;
//}
////��ָ�벻֪��ָ�������ʱ��  -->��NULL
////��ָ��Ŀռ䱻�ͷŵ�֮��   -->��NULL
////����ָ����Ч�ռ��ʱ��   -->������Ч�ĵ�ַ,����֪�������������
//// 
//// Ȼ��ÿ��ʹ��ָ�������ʱ�� --> �������ж���Ч��  --->�����Ͳ����׳���

//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;//δ��ʼ��
//	//����:��ʼ��: Ϊ�����1��λ��, �ж�: ָ��Ĺ�ϵ����(�Ƚϴ�С), ����: for����3�������Ա�ʡ��
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;//�Ƚ�����, ��++�ƶ�(ָ��+����), ��ÿ��Ԫ�ظ�ֵΪ0
//	}
//	return 0;
//}
////�����±������,��ַ���ɵ͵��߷����仯, ��(��ַ) ------> ��(��ַ)

//#include<stdio.h>
//int main()
//{
//	//��ӡ����
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;  //ָ���1��Ԫ��λ��
//	int* pend = arr + 9; //ָ���10��Ԫ��λ�� (ָ��+-����)
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;       //(ָ��+-����)
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char c[5];
//	ָ���ָ�������ǰ��:
//	 ����ָ��Ҫָ��ͬһ��ռ�;
//	printf("%d\n", &arr[9] - &c[0]);//err;�������������ǲ�ͬ��,���ܽ���ָ�����
//
//	printf("%d\n", &arr[9] - &arr[0]); //���Ϊ9 ��ָ��-ָ��-->���Ϊ����ָ��֮���Ԫ�ظ�����
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int arr[3][3] = { 0 };
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d%d", &i,&j);
//
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d\n",arr[i][j]);
//
//		}
//	}
//	
//	return 0;
//}

//#include<string.h>
//#include<stdio.h>
////������3��:
//// 
////������
////int my_strlen(char* str) //strlen()ԭ���Ǵ� ��Ԫ�� ��ʼ��,ֱ���ҵ� \0 �Ž���;
////{
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
//
////�ݹ�
////int my_strlen(char* str)
////{
////
////	if (*str != '\0')
////		return 1 + my_strlen(str+1);//���ﲻ��д++,Ҫд+1 ;���һ�η���1+0,�ڶ��η���1+1,�����η���1+2;
////	else
////		return 0;
////}
//
////ָ��-ָ��
//my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	//strlen(); - ���ַ�������
//	
//	int len = my_strlen("abc");//�����ַ�������strlen()��ʱ��,��������Ԫ��a�ĵ�ַ;
//	printf("%d\n", len);
//	return 0;
//}

//for (vp = &values[N_values]; vp > &values[0];)
//{
//	*--vp = 0;
//}
//
//for (vp = &values[N_values-1]; vp >= &values[0];vp--)
//{
//	*vp = 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//������ �Ƿ�Ϊ������Ԫ�صĵ�ַ��?
//	printf("%p\n", &arr[0]);//��һ��Ԫ�صĵ�ַ
//	//���һ��,֤������ĵ�ַ (������) ,������Ԫ�صĵ�ַ
//	//����˵����Ԫ�ص��׸��ֽڵĵ�ַ
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%p <==> %p\n", &arr[i], p + i); //�����ַ��һ��,֤���� p+i �ĵ�ַ���� arr[i] �ĵ�ַ
//		//Ҳ����˵: 
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++) //�������ԭ����д�ӡ
//	{
//		printf("%d ", *(p + i));//���Ϊ0123456789
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr; //������
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]); // p[2] --> *(p+2)
//
//	// []��һ��������  2��arr������������
//	// a+b
//	// b+a
//	printf("%d\n", 2[arr]);
//	printf("%d\n", arr[2]); //�������ڱ����ʱ��: arr[2] --> *(arr+2) --> *(2+arr) --> 2[arr]
//	 
//	// arr[2] <==> *(arr+2) <==> *(p+2) <==> *(2+p) <==> *(2+arr) == 2[arr]
//	// 2[arr] <==> *(2+arr) 
//	return 0;
//}
////����4����ӡ�����Ľ����Ϊ3; ��Ϊ���ǵĵײ����ʶ�һ��: *(arr+2)

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�����,��һ��ָ��
//
//	int** ppa = &pa;//paҲ�Ǹ�����,&paȡ��pa���ڴ��е���ʼ��ַ
//	//ppa����һ������ָ�����
//	// *ppa == pa
//	// *pa == a
//	//  ���� **ppa == a
//
//	int*** pppa = &ppa;
//	//ͬ��, pppa������ָ��
//	//ͬ�������4,5,6..��ָ��,���ǳ���1,2�������,�������õ�
//	return 0;
//}


//ָ������ - �Ǹ�����

//int main()
//{
//	int arr[10];//�������� - ������͵����������������
//	char ch[5];//�ַ����� - ��ŵ����ַ�
//	//ָ������ - ���ָ�������
//	int* parr[5]; //����ָ�������
//	char* parr[5]; //parr��һ������,��5��Ԫ��,ÿ��Ԫ����һ���ַ�ָ��
//	return 0;
//}

//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu  //��������
//{
//	//��Ա����
//	struct B sb;//�ṹ��ĳ�Ա��������һ���ṹ��
//	char name[20];//����
//	int age;//����
//	char id[20];//ѧ��
//} s1,s2; //s1��s2Ҳ�ǽṹ�����
////s1��s2��ȫ�ֱ���
//
//int main()
//{
//	struct Stu s = { {'w',20,3.14},"����",30,202005034 };//��������
//	//�����s�Ǿֲ�����
//
//	return 0;
//}

//
//#include<stdio.h>
//struct Point
//{
//	int x;
//	int y;
//}p1;//��������
//
//struct Node
//{
//	int data;
//	struct Point P;
//	struct Node* next;//������ָ��
//}n1 = { 10,{4,5},NULL };//����n1������n1��ʼ����ȫ�ֱ�����
//
//int main()
//{
//	struct Point p2;//��������
//	struct Point p3 = { 5,4 };//��ʼ�����ֲ�������
//	return 0;
//}

//#include<stdio.h>
//struct B
//{
//	char a;
//	short b;
//	double c;
//};
//struct Stu
//{
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	struct Stu s = { {'D',55,3.14},"w",20,"2020m1234" };
//	printf("%c\n", s.sb.a);
//	printf("%d\n", s.sb.b);
//	printf("%s\n", s.name);
//	printf("%.2f\n", s.sb.c);
//	struct Stu* ps = &s;  //�ṹ��ָ��
//	printf("%c\n", (*ps).sb.a); //�ṹ�������
//	printf("%c\n", ps->sb.a);  //ps->sb == (*ps).sb  ָ��
//	return 0;
//}


//#include<stdio.h>
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu
//{
//	//��Ա����
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//};
//void print1(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//void print2(struct Stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//int main()
//{
//	struct Stu s = { {'w',20,3.14},"����",30,"2020m146" };
//	//дһ��������ӡs������
//	
//	print1(s);   //��ֵ����    s�ж��t��Ҫ�������Ŀռ�������s��������t���治�����ޱ�s������  ���˷�ʱ��Ϳռ䣬�����ã�
//	print2(&s);   //��ַ����    ֻ����һ��ָ���С�Ŀռ䣬4����8���ֽڣ�������ps�����޸�s������  ��Ч�ʸ��ߣ����ã�
//	//�ѽṹ��Ĳ�����������������д��
//	//��ֵ-�����ѿռ䣬���ܸ�ֵ�����԰�ȫ
//	//��ַ-�죬ʡ�ռ䣬���Ը�ֵ�����Կ��ܲ�����ȫ  �����������ǽ����õģ�
//	return 0;
//}

//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()              
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = Add(a, b); //�󲿷�����£������ȴ�b�ٴ�a������ �� �󴫣� ��Ϊ���ε�ʱ�����ʱ�����ռ䣬���ڴ��Σ�����Ҳ����ѹջ������
//	return 0;
//};
//ÿһ���������ö������ڴ��ջ���Ͽ���һ��ռ䣡
//�ڴ��У�ջ������������̬��
//main������ջ��������һ��ռ䣺
//    ���η���a��b��c���������£�����«��
//    ��Add()����ʱ���ٷ���b��a����ʱ�ռ䣬Ҳ�Ǵ������£�ѹջ��
//        Add������ռ��һƬ�ռ�
//           ��Add()�д���z������int x,int y (x��y����Add()ռ�õĿռ���)
//           Add()����x��yʱ������ǰ����ʴ���ʱ��������ʱ�ռ䣬
//           z��ֵ�ı�
//    ����z��ֵ��c��
//    ���Add()�ʹ���ʱ��������ʱ�ռ�a��b  ������������գ�����«��
// 
//��Ϊ����ʱ��������ʱb��a�ռ�ѹ��֮ǰ��a��b��c�ռ䣬������ͽ�ѹջ��
//
//����ջ֡�Ĵ���������



//ģ��ʵ��strcpy
//strcpy - �ַ�������
//#include<string.h>
//#include<stdio.h>

//�汾1
//void my_strcpy(char* dest,char* src) //destĿ�ĵأ�srcԴͷ 
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//	//�����ã���д�ò���
//}
//�汾2
//void my_strcpy(char* dest, char* src) //destĿ�ĵأ�srcԴͷ 
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++; //����++����ʹ����++������������*�����ã��ٸ�ֵ�����++
//	}
//	*dest = *src;
//}
//�汾3
//#include<assert.h>
//void my_strcpy(char* dest, const char* src) //destĿ�ĵأ�srcԴͷ 
//{
//	assert(src != NULL);//����   ���arr2Ϊ��ָ�룬��ᱨ������ʾassert�Ĵ�������һ��
//	assert(dest != NULL);//��ʵ�ã�����ָ������ã�������������
//
//	while (*dest++ = *src++) 
//	{
//		; //�ȿ�����'\0'����ʹ��ѭ��ֹͣ��'\0'��ASCIIֵΪ0��
//	}
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxx";
//	char arr2[] = "hello";
//
//	//strcpy(arr1, arr2);// 1.Ŀ��ռ����ʼ��ַ  2.Դ�ռ����ʼ��ַ
//	//��������ݿ�����ǰ���arr2��\0Ҳ�����һ�𿽱���ȥ 
//	// //��Ҫͷ�ļ�string.h
//	//printf("%s\n", arr1);//���Ϊhello
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);//���Ϊhello
//	return 0;
//}


//const ���α�������������ͻᱻ��Ϊ ������ �����ܱ��޸ģ��������ϻ��Ǳ�����
//#include<stdio.h>
//int main()
//{
//	const int num = 10;
//	//num = 20;//err ����
//
//	int const*  p = &num;
//	int n = 100;
//	//const����ָ�������ʱ��
//	//const �������*���ұߣ����ε���ָ�����p����ʾָ��������ܱ��ı䡣
//	//      ����ָ��ָ������ݿ��Ա��ı䡣
//	// 
//	*p = 20; //ok
//	p = &n;//err
//
//	//const int* p = &num;
//	//int n = 100;
//	////const����ָ�������ʱ��
//	////const �������*����ߣ����ε���*p����ʾָ��ָ������ݣ��ǲ���ͨ��ָ�����ı�ġ�
//	////      ����ָ����������ǿ��Ա��޸ĵġ�
//	//// 
//	////*p = 20; //err
//	//p = &n;//ok
//
//	printf("%d\n", num);
//	return 0;
//}




 //�汾3

//strcpy ����⺯�� ��ʵ���ص���Ŀ��ռ����ʼ��ַ


//#include<stdio.h>
//#include<assert.h>  
//char* my_strcpy(char* dest, const char* src) 
//
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)  
//	{
//		; 
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxx";
//	char arr2[] = "hello";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//��׳�� 
//³����
// size_t - unsigned int  �޷�����������
//#include<assert.h>
//#include<stdio.h>
//size_t my_strlen(const char* str)
//{
//	//assert(str != NULL);
//	assert(str);
//	int count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "11,3545,35";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

////дһ���������һ�����ֵĶ���������м���1 
//#include<stdio.h>
//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//ÿ����һ�ζ����ȥһ�������Ƶ� 1��ֱ��ȫ�� 1 ��� 0
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = -1;
//	printf("%d\n", NumberOf1(n));
//	return 0;
//}
////дһ�������ж�һ�������Ƿ�Ϊ2��n�η�
////2��n�η������֣�������ֻ��һ��1
////k & (k - 1) == 0


//#include<stdio.h>
//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//ÿ����һ�ζ����ȥһ�������Ƶ� 1��ֱ��ȫ�� 1 ��� 0
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//	int ret = m ^ n; //^�����ͬΪ0������Ϊ1
//	//ͳ��һ��ret�Ķ��������м���1����˵��m��n�Ķ�����λ���м���λ��ͬ
//	count = NumberOf1(ret);
//	/*for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}*/
//	printf("%d\n", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//��ȡn�Ķ������е�����λ��ż��λ
//	//00000000000000000000000000001010  10
//	int i = 0;
//	//��ӡż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", ((n >> i) & 1));
//	}
//	printf("\n");
//	//��ӡ����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", ((n >> i) & 1));
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr;  //��int���ͣ�ǿ������ת����short�����ͣ�4���ֽڱ�2���ֽ�
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = 0; //�øĹ����͵�*pÿ�θ�ֵ��2���ֽڵ�����4��ֻ�ı���8���ֽ�
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]); //��ӡ����û��ǰ��arr���Ϊ 0 0 3 4 5  ǰ��8���ֽڱ���0�����治��
	}
	return 0;
}