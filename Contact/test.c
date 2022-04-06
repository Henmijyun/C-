#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("*************************\n");
	printf("*** 1.add    2.del    ***\n");
	printf("*** 3.search 4.modify ***\n");
	printf("*** 5.sort   6.print  ***\n");
	printf("*** 0.exit            ***\n");
	printf("*************************\n");
}

void test()
{
	int input = 0;
	//����ͨѶ¼
	Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con); //�����ϵ��
			Sleep(1000); //ֹͣ1��
			break;
		case DEL:
			DelContact(&con); //ɾ��ָ����ϵ�� �� ȫ����ϵ��
			Sleep(1000);
			break;
		case SEARCH:
			SearchContact(&con); //������ϵ��
			Sleep(5000);
			break;
		case MODIFY:
			ModifyContact(&con); //�޸�ָ����ϵ����Ϣ
			Sleep(1000);
			break;
		case SORT:
			SortContact(&con); //������ϵ������
			Sleep(1000);
			break;
		case PRINT:
			PrintContact(&con); //��ӡͨѶ¼
			Sleep(5000);
			break;
		case EXIT:
			DestroyContact(&con);
			printf("*** �˳�ͨѶ¼ ***\n");
			Sleep(1000);
			break;
		default:
			printf("*** ��������,���������� ***\n");
			Sleep(1000);
			break;
		}
		system("cls"); //����
	} while (input);
}

int main()
{
	test();
	return 0;
}





