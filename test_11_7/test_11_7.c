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


int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n",)
	return 0;
}