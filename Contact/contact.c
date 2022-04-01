#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void InitContact(struct Contact* pc)//��ʼ��ͨѶ¼
{
	assert(pc);
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data)); //���ڴ��ȫ0
}

void AddContact(struct Contact* pc) //�����ϵ��
{
	assert(pc);
	if (MAX == pc->sz)
	{
		printf("*** ͨѶ¼����,�޷���� ***\n");
		return;
	}
	//¼����Ϣ
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);
	
	pc->sz++;
	printf("*** ��ӳɹ� ***\n");
}

void PrintContact(const struct Contact* pc) //��ӡͨѶ¼
{
	assert(pc);
	if (0 == pc->sz)
	{
		printf("*** ͨѶ¼Ϊ�� ***\n");
		return;
	}
	int i = 0;
	printf("%-20s %-5s %-5s %-13s %-30s\n","����","�Ա�","����","�绰","��ַ");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s %-5s %-5d %-13s %-30s\n", pc->data[i].name,
			pc->data[i].sex,pc->data[i].age, 
			pc->data[i].tele, pc->data[i].addr);
	}
}

//�����ֲ���
//�ҵ������±�,û�ҵ�����-1
int FindByName(const Contact* pc)
{
	assert(pc);
	int i = 0;
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ���ҵ���ϵ������:>");
	scanf("%s", name);
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
			return i;
	}
	return -1;
}

void DelContact(struct Contact* pc) //ɾ��ָ����ϵ�� �� ȫ����ϵ��
{
	assert(pc);
	if (0 == pc->sz)
	{
		printf("*** ͨѶ¼�ѿ�,�޷�ɾ�� ***\n");
		return;
	}
	//ɾ��:
	int num = 0;
	//ѡ��ɾ���ķ�ʽ
	do
	{
		printf("��ѡ���ɾ����ʽ: 1.ָ����ϵ��  2.ȫ����ϵ�� \n��������:>");
		scanf("%d", &num);
		if (num < 1 || num > 2)
			printf("��������,����������\n");
	} while (num < 1 || num > 2);
	if (1 == num)
	{
		//1.����Ҫɾ������ϵ��
		int pos = FindByName(pc); //�ҵ������±�,û�ҵ�����-1
		if (-1 == pos)
		{
			printf("*** û�ҵ����Ӧ����ϵ�� ***\n");
			return;
		}

		//2.ɾ����ϵ�� 
		int del_sz = (pc->data + pc->sz) - (pc->data + pos + 1);
		//��ɾ������ϵ�˺������������ * һ�˵��ڴ��С = Ҫɾ�����˺�����ڴ��ܴ�С
		del_sz *= sizeof(pc->data[0]);
		memcpy(pc->data + pos, pc->data + pos + 1, del_sz);//һƬ�ڴ���ǰ����
		pc->sz--;
		printf("*** ָ����ϵ����ɾ���ɹ� ***\n");
		return;
	}
	if (2 == num)
	{
		pc->sz = 0;
		printf("*** ȫ����ϵ����ȫ����� ***\n");
		return;
	}

}

void SearchContact(const struct Contact* pc) //������ϵ��
{
	assert(pc);
	if (0 == pc->sz)
	{
		printf("*** ͨѶ¼Ϊ�� ***\n");
		return;
	}
	int pos = FindByName(pc);
	if (-1 == pos)
	{
		printf("*** û�ҵ����Ӧ����ϵ�� ***\n");
		return;
	}
	printf("%-20s %-5s %-5s %-13s %-30s\n", "����", 
		               "�Ա�", "����","�绰", "��ַ");
	printf("%-20s %-5s %-5d %-13s %-30s\n", pc->data[pos].name, 
		pc->data[pos].sex, pc->data[pos].age,
		pc->data[pos].tele, pc->data[pos].addr);
}

void ModifyContact(struct Contact* pc) //�޸�ָ����ϵ����Ϣ
{
	assert(pc);
	if (0 == pc->sz)
	{
		printf("*** ͨѶ¼Ϊ�� ***\n");
		return;
	}
	int pos = FindByName(pc);
	if (-1 == pos)
	{
		printf("*** û�ҵ����Ӧ����ϵ�� ***\n");
		return;
	}
	printf("%-20s %-5s %-5s %-13s %-30s\n","����","�Ա�","����","�绰","��ַ");
	printf("%-20s %-5s %-5d %-13s %-30s\n", pc->data[pos].name,
		pc->data[pos].sex, pc->data[pos].age,
		pc->data[pos].tele, pc->data[pos].addr);

	//�޸���Ϣ
	printf("���޸�����:>");
	scanf("%s", pc->data[pos].name);
	printf("���޸��Ա�:>");
	scanf("%s", pc->data[pos].sex);
	printf("���޸�����:>");
	scanf("%d", &(pc->data[pos].age));
	printf("���޸ĵ绰:>");
	scanf("%s", pc->data[pos].tele);
	printf("���޸ĵ�ַ:>");
	scanf("%s", pc->data[pos].addr);

	printf("*** �޸ĳɹ� ***\n");
}

//����ʵ�ֵ�׼��
int cmp_char(const void* e1, const void* e2) //�Ƚ�char���͵ĺ���
{
	// ���������ַ����Ա�strcmp�����ķ���ֵ
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

int cmp_int(const void* e1, const void* e2) //�Ƚ�int���͵ĺ���
{
	return ((PeoInfo*)e1)->age - ((PeoInfo*)e1)->age;
}

void MySwap(char* p1, char* p2, int width)//��������
{
	int i = 0;
	for (i = 0; i < width; i++) //ÿ��char���ͽ��н���
	{
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}
}

//������
void MyQsort(void* base, int sz, int width,
	int (*cmp)(const void* e1, const void* e2)) 
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width,
				(char*)base + (j + 1) * width) > 0) //����ֵ > 0 ���н���
			{
				//����
				MySwap((char*)base + j * width,
					(char*)base + (j + 1) * width, width);
			}
		}
	}
}

void SortContact(struct Contact* pc) //������ϵ������
{
	assert(pc);
	int num = 0;
	//����ķ�ʽ
	do
	{
		printf("��ѡ�������ʽ: 1.����  2.���� \n��������:>");
		scanf("%d", &num);
		if (num < 1 || num > 2)
			printf("��������,����������\n");
	} while (num < 1 || num > 2);
	
	//�����ʵ��
	if (1 == num)
	{
		MyQsort(pc->data, pc->sz, sizeof(pc->data[0]), cmp_char);
	}
	if (2 == num)
	{
		MyQsort(pc->data, pc->sz, sizeof(pc->data[0]), cmp_int);
	}

	printf("*** ����ɹ� ***\n");
}


