/*#include<stdio.h>
int main(void)
{
	printf("hello,world\n");
	return 0;
}*/

#include<stdio.h>
/*int main()
{
	printf("����ˤ��ϡ�����\n");//�ձ��Z�Ǥ���������ʤ���
	return 0;

}*/
int main()
{
	char ch = 'A';         //char--�ַ�����  
	printf("%c\n",ch);     // %c--��ӡ�ַ���ʽ������   \n--���е���˼
	/* %f--��ӡ�������֣���С����
	   %p--�Ե�ַ����ʽ��ӡ
	   %x--��ӡʮ����������
	   %o....*/
	//short int   //������

	int age = 20;           //����
	printf("%d\n", age);    // %d--��ӡ����ʮ��������

	//long ������
    long  nom = 11100;
	printf("%d\n", nom);
	
	float f = 5.2;     //�����ȸ�����
	printf("%f\n", f);
	
	double d = 3.14;    //˫���ȸ�����
	printf("%lf\n", d);//��ӡ˫���ȸ�����ʱ����%f���ܻᶪʧ���ȣ�������%lf��Ϊ����
	return 0;
}