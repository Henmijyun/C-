#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int age = 60;
//	if (age < 18)
//		printf("δ����\n");
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("����\n");
//		else if (age >= 28 && age < 50)
//			printf("׳��\n");
//		else if (age >= 50 && age < 90)
//			printf("����\n");
//		else
//			printf("�ϲ���");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}                           //{}���������
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	if (a == 0)   //����Ϊ�٣�����Ķ���ִ���ˡ������else���ڶ���ifƥ�䣬���Ը�����û�й�ϵ
//	{
//		if (b == 20)
//			printf("hehe\n");
//	}
//	else
//			printf("haha\n"); //else�Ǹ���������ģ�δƥ���if������ƥ�䡣��������ƥ����ǵڶ���if
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = 4;
//	if (5 == num)     //�ж����ʱ��������д����ȷ���������
//	{
//		printf("hehe\n");
//	}
//
//	//if (num = 5)    // = �Ǹ�ֵ��== �ж����
//	//{
//	//	printf("�Ǻ�\n");
//	//}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int b = 0;
//	//while (b <= 100)
//	//{
//	//	if (1 == b % 2)
//	//	printf("%d\n", b);
//	//		b++;
//	//}
//	int a = 1;
//	while (a <= 100)
//	{
//		printf("%d ", a);
//		a += 2;        //���ַ�ʽint aҪ=1������ѭ��������
//	}
//	if (1 == a % 2)
//	{
//		printf("����\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		if(n==1)
//			printf("hehe\n");
//	case 2:
//	case 3:	
//	case 4:
//		printf("������\n");//����1~4������ʾ�����գ���������Ϊ�հ�
//		break;
//	case 5:
//	case 6:
//		printf("��Ϣ��\n");
//		break;
//	default:          //Ĭ�ϣ�����û�е�ѡ��ʱ������ÿ��case������default��break
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 9)
//			break;  //break����������ֹѭ����iѭ����5ʱ��ֹͣѭ����ֱ������ } ������û�о���printf����û�д�ӡ����
//		if (i == 5)
//			continue;//continue������ֹ����ѭ�����������printf���β���ӡ���ص�����while���¿�ʼѭ��
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int ch = 0;                    //ctrl + z
	//while ((ch = getchar()) !=EOF) //EOF - end of file -> ֵΪ-1  ���ļ�������־��
	//{
	//	putchar(ch);
	//}
	//int ch = getchar();    //����
	//putchar(ch);           //�������printf����һ��
	// 
	//while((ch=getchar()) !='\n')    //��������printf��ӡ֮�󣬻������뻺����ʣ�¶��������������԰����������
	//{                            //ѭ����ȡ������������ֱ��������'/n'����ʱ����������գ�����ѭ��
	//    ;
	//}

//	while((ch=getchar()) !=EOF) //����ѭ������
//	{
//	   if(ch<'0' || ch>'9')      //chС��0���Ҵ���9��ֵ��ȫ����������ѭ��
//		 continue;            //��������ֻ��0~9���Ա����
//	   putchar(ch);
//	}
//
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	//  ��ʼ��  �ж�   ����   ��Ҫ��һ�����forѭ����
//	for (i = 0;i <= 10;i++)
//	{
//		//if (i == 5)
//		//	break;        //����breakҲ����ֹ����ѭ��������}
//		if (i == 5)
//			continue;     //����continueҲ����ֹ����ѭ��������} ,��������ѭ��
//		printf("%d ", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//for(;;)
//	int a = 0;
//	int b = 0;
//	for (a=0;a<10;a++)  //�ó��Ľ��Ϊ��100��hehe
//	{                     //���ǣ����ʡ��a=0��b=0�Ļ���ֻ����10��hehe��
//		for(b=0;b<10;b++) //��Ϊ����2��for����ѭ��ʱ��b=10����1��forѭ����ȥ��bΪ�٣��������������Բ��ᷢ���ı�
//		printf("hehe\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++) //++����ǰ�û��Ǻ��ö��Ǽ�һ
//	{
//		printf("hehe\n");      //������hehe��������x=2��Ϊ�٣�����ѭ��
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		//if (i == 5)
//		//	break;   //���Ϊ��1 2 3 4����ֹ����ѭ��
//		//if (i == 5)  
//		//	continue;  //���Ϊ��1 2 3 4 ��ѭ��
//
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 1;
//	int sum = 0;
//	for (b = 1; b <= 10; b++)
//	{
//		ret = ret * b;        
//		//b�Ľ׳�
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 1;
//	int sum = 0;
//	for (b = 1; b <= 3; b++)
//	{
//		ret = 1;
//		for (a = 1; a <= b; a++)
//		{
//			ret = ret * a;        //b�Ľ׳�
//		}
//		sum = sum + ret;
//		
//	}
//
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 1;
//	scanf("%d", &b);       //����b��ֵ
//	for (a = 1; a<=b; a++)
//	{
//		ret = ret * a;      //���ѭ����1��ʼ�ˣ�һֱ�˵�b+1��ֵ������ѭ��
//	}
//	printf("ret=%d\n",ret);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//дһ�����룬��arr���飨����ģ����ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]); //����Ԫ�ظ��� = �����ܴ�С / ÿ��Ԫ�صĴ�С
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d \n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10 };
//	int k = 7;                              //Ҫ�ҵ���
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;                //���±�
//	int right = sz - 1;          //���±�
//
//	while (left <= right)         //����: �� <= ��
//	{
//		int mid = (left + right) / 2;  //�е�
//		if (arr[mid] > k)
//		{
//			right = mid - 1;       //���к�����±�
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;        //���к�����±�
//		}
//		else
//		{
//			printf("�ҵ���,�±���: %d\n", mid);    //���к���е�
//			break;
//		}
//	}
//	if (left > right)              //����:�� > �� (�����ȶ���)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}\


#include<stdio.h>
#include<string.h>
#include<windows.h> //Sleep ֹͣ������ͷ�ļ�
#include<stdlib.h>  //system ִ��ϵͳ�������ͷ�ļ�
int main()
{
	char arr1[] = "welcome to bit!!!!!";
	char arr2[] = "###################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//����-1��errer����Ϊ���и����ص�\n,����Ҫ-2
	int right = strlen(arr1) - 1;             //����strlen�������鳤��,-1����Ϊ���ص�\n

	do
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		
		Sleep(200);   
		//system("cls"); 
		left++;
		right--;

	} 
	while (left <= right);
	right++;
	char arr3[]= "###################";
	do
	{
		arr2[left] = arr3[left];
		arr2[right] = arr3[right];
		printf("%s\n", arr2);
		Sleep(200);   
		//system("cls"); 
		left++;
		right--;
		if (right < 0)
			break;
	} 
	while (left > right);
	do
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);

		Sleep(200);
		//system("cls"); 
		left++;
		right--;

	} while (left <= right);
	printf("%s\n", arr2);
	return 0;
}