#define _CRT_SECURE_NO_WARNINGS 1

//���泣��  100; 'c';
//const���εĳ�����
//#define ����ı�ʶ������
//ö�ٳ���   һ���Զ������͵ķ���

//#include<stdio.h>
//enum Sex  
//{
//	MALE,  //0
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;//ö��ȡֵֻ��ȡ�趨�õ�ֵ:ֻ����MALE,FEMALE,SECRET���е�ֵ
//	printf("\a\a\a\a\a\a");
//	return 0;
//}
//
//#include<stdio.h>
//enum Set
//{
//    Name,
//    Age,
//    Gender
//}s;
//int main(void)
//{
//  
//    int i = 0;
//    printf("%d\n", Name);
// 
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    printf("Name    Age     Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18      man\n");
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	int b = -a;
//	int c = +b;
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//#include<stdio.h>
////�����ṹ��
//struct Sut
//{
//    float a[5];
//    float b[5];
//    float c[5];
//    float d[5];
//    float e[5];
//}s[5] = { 0 };//�����ṹ�����
//
//int main()
//{
//
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        //����
//        scanf("%f %f %f %f %f", (s[i]).a, (s[i]).b, (s[i]).c, (s[i]).d, (s[i]).e);
//        printf("\n");
//    }
//    for (i = 0; i < 5; i++)
//    {
//        printf("%.1f %.1f %.1f %.1f %.1f ", (s[i]).a, (s[i]).b, (s[i]).c, (s[i]).d, (s[i]).e);
//        printf("%.1f\n", ((s[i]).a) + ((s[i]).b) + ((s[i]).c) + ((s[i]).d) + ((s[i]).e));
//    }
//    return 0;
//}


#include<stdio.h>
int main()
{
    double Sut[5][5] = { 0 };
    int i = 0;
    int j = 0;
    double add = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%lf %lf %lf %lf %lf", Sut[i][0], Sut[i][1], Sut[i][2], Sut[i][3], Sut[i][4]);
   
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%.1f ", Sut[i][j]);
            add += Sut[i][j];
        }
        printf("%.1f\n", add);
        add = 0;
    }

    return 0;
}