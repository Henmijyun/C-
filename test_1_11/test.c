#define _CRT_SECURE_NO_WARNINGS 1
//#include "XXXX.h"
//#pragma comment(lib,"XXXX.lib") //µ¼ÈE²Ì¬¿E

//×ÖÃæ³£Á¿  100; 'c';
//constĞŞÊÎµÄ³£±äÁ¿
//#define ¶¨ÒåµÄ±E¶·û³£Á¿
//Ã¶¾Ù³£Á¿   Ò»ÖÖ×Ô¶¨ÒåÀàĞÍµÄ·½·¨

//#include<stdio.h>
//enum Sex  
//{
//	MALE,  //0
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;//Ã¶¾ÙÈ¡ÖµÖ»ÄÜÈ¡Éè¶¨ºÃµÄÖµ:Ö»ÄÜÊÇMALE,FEMALE,SECRETÆäÖĞµÄÖµ
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
////´´½¨½á¹¹ÌE
//struct Sut
//{
//    float a[5];
//    float b[5];
//    float c[5];
//    float d[5];
//    float e[5];
//}s[5] = { 0 };//´´½¨½á¹¹Ìå±äÁ¿
//
//int main()
//{
//
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        //ÊäÈE
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

//
//#include<stdio.h>
//int main()
//{
//    double Sut[5][5] = { 0 };
//    int i = 0;
//    int j = 0;
//    double add = 0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%lf %lf %lf %lf %lf", Sut[i][0], Sut[i][1], Sut[i][2], Sut[i][3], Sut[i][4]);
//   
//    }
//    for (i = 0; i < 5; i++)
//    {
//        for (j = 0; j < 5; j++)
//        {
//            printf("%.1f ", Sut[i][j]);
//            add += Sut[i][j];
//        }
//        printf("%.1f\n", add);
//        add = 0;
//    }
//
//    return 0;
//}


//¼ÆËE / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ¡­¡­ + 1 / 99 - 1 / 100 µÄÖµ£¬´òÓ¡³ö½á¹E


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	float add = 0;
//
//	while (i < 100)   //1 3 5 7 9  i×ûĞE9
//	{
//		add += ((1.0 / i) - (1.0 / (i + 1)));
//		i += 2; 
//	}
//	printf("%f\n", add);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int add = 110;
//
//	printf("%d/100\n", add);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//void menu()
//{
//	printf("***************\n");
//	printf("*****1.play****\n");
//	printf("*****0.exit****\n");
//	printf("***************\n");
//}
//
//void game()
//{
//	//1.Éú³ÉÒ»¸öËæ»úÊı
//	int guess = 0;
//	int ret = rand()%100+1;
//	//2.²ÂÊı×Ö
//	printf("²ÂÊı×Ö£º¡·");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("²ÂĞ¡ÁË\n");
//		else if (guess > ret)
//			printf("²Â´óÁË\n");
//		else
//		{
//			printf("²Â¶ÔÁË\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("ÇE¡Ôñ¡·£º");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("ÍË³öÓÎÏ·\n");
//			break;
//		default:
//			printf("ÊäÈEúêó£¬ÖØĞÂÊäÈE);
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	int tmp = 0;
//	scanf("%d %d %d", &x, &y, &z);
//	if (x < y)
//	{
//		tmp = y;
//		y = x;
//		x = tmp;
//	}
//	if (x < z)
//	{
//		tmp = z;
//		z = x;
//		x = tmp;
//	}
//	if (y < z)
//	{
//		tmp = z;
//		z = y;
//		y = tmp;
//	}
//	printf("%d %d %d\n", x, y, z);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	//ÊäÈE
//	scanf("%d %d", &a, &b);
//	while (m = a % b)
//	{
//		a = b;
//		b = m;
//	}
//	printf("%d\n", b);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	printf("%d", printf("%d\n", printf("%d  \n", printf("%d\n", 669))));
//	return 0;
//}

//ÊµÏÖÒ»¸öº¯Êı£¬ÅĞ¶ÏÒ»¸öÊıÊÇ²»ÊÇËØÊı¡£
//ÀûÓÃÉÏÃæÊµÏÖµÄº¯Êı´òÓ¡100µ½200Ö®¼äµÄËØÊı¡£
//
//#include <stdio.h>
//int PriNum(int x)
//{
//	int i = 0;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (1 == PriNum(i))
//			printf("ËØÊı\n");
//		else
//			printf("²»ÊÇËØÊı\n");
//	}
//	return 0;
//}


//ÊµÏÖº¯ÊıÅĞ¶ÏyearÊÇ²»ÊÇÈóÄê¡£
//#include <stdio.h>
//int BisTile(int x)
//{
//	if ((x % 400 == 0) || (x % 4 == 0 && x % 100 != 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (1 == BisTile(i))
//			printf("%d ",i);
//	}
//
//	return 0;
//}

//µİ¹é·½Ê½ÊµÏÖ´òÓ¡Ò»¸öÕûÊıµÄÃ¿Ò»Î»
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);  //µİ¹éÈEÚ
//	printf("%d ", n % 10);  //µİ¹é³ö¿Ú£¬´òÓ¡
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


//µİ¹éºÍ·Çµİ¹é·Ö±ğÊµÏÖÇónµÄ½×³Ë£¨²»¿¼ÂÇÒç³öµÄÎÊÌâ£©
//#include <stdio.h>
//int FacRial(int n)//µİ¹E
//{
//	if (n == 1) //n=1 Ê±Í£ÏÂÀ´
//		return 1;
//	return n * FacRial(n - 1); //n-1 ·µ»ØÖµ *n
//}
//
//int FacRial2(int n)//²»ÓÃµİ¹E
//{
//	int i = 0;
//	int k = 1;
//	for (i = 1; i <= n; i++)
//	{
//		k = k * i;  //1*2*3*4..*n
//	}
//	return k;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = FacRial(num);//µİ¹E
//	int ret2 = FacRial2(num);//²»ÓÃµİ¹E
//	printf("µİ¹E%d\n²»ÓÃµİ¹E%d\n", ret, ret2);
//	return 0;
//}

//µİ¹éºÍ·Çµİ¹é·Ö±ğÊµÏÖstrlen
//#include <stdio.h>
//int MyStrlen(char* str)//µİ¹E
//{
//	if (*str != '\0')
//		return 1 + MyStrlen(str+1);
//	return 0;
//}
//
//int MyStrlen2(char* str2)//·Çµİ¹E
//{
//	int count = 0;
//	while (*str2 != '\0')
//	{
//		count++;
//		str2++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("µİ¹E%d\n·Çµİ¹E%d\n", MyStrlen(arr), MyStrlen2(arr));
//	return 0;
//}


//±àĞ´Ò»¸öº¯Êı reverse_string(char* string)£¨µİ¹éÊµÏÖ£©
//ÄæĞòÖ®ºóÊı×éµÄÄÚÈİ±ä³É£ºfedcba
//#include <stdio.h>
//void reverse_string(char* string)
//{
//	char tmp = *string;
//	if (*(string) != '\0')
//	{
//		
//		reverse_string(string + 1);
//	}
//	*(string - 1)= tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//Ğ´Ò»¸öµİ¹éº¯ÊıDigitSum(n)£¬ÊäÈE»¸ö·Ç¸ºÕûÊı£¬·µ»Ø×é³ÉËEÄÊı×ÖÖ®ºÍ
//ÀıÈç£¬µ÷ÓÃDigitSum(1729)£¬ÔòÓ¦¸Ã·µ»Ø1 + 7 + 2 + 9£¬ËEÄºÍÊÇ19
//ÊäÈEº1729£¬Êä³ö£º19
//#include <stdio.h>
//unsigned int DigitSum(unsigned int n)
//{
//	int ret = 0;
//	if (n > 9)
//		ret = DigitSum(n / 10);
//	return (n % 10) + ret; //Ã¿´Î·µ»ØÉÏÒ»´ÎÏà¼ÓµÄºÍ
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//	return 0;
//}

//±àĞ´Ò»¸öº¯ÊıÊµÏÖnµÄk´Î·½£¬Ê¹ÓÃµİ¹éÊµÏÖ¡£
//#include <stdio.h>
//int Squa(int x, int y) //xµÄy´Î·½
//{
//	int i =1;
//	if (y > 1)
//		i = Squa(x, y - 1);
//	return x * i;   //Ã¿´Î·µ»Ø xÓE Ïà³ËµÄ½á¹E
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%d\n", Squa(n, k));
//	return 0;
//}


//µİ¹éºÍ·Çµİ¹é·Ö±ğÊµÏÖÇóµÚn¸öì³²¨ÄÇÆõÊı
//ÀıÈç£º 1 1 2 3 5 8 13 21 
//ÊäÈEº5  Êä³ö£º5
//ÊäÈEº10£¬ Êä³ö£º55
//ÊäÈEº2£¬ Êä³ö£º1
//#include <stdio.h>
//int Fib1(int n1)//µİ¹E
//{
//    if (n1 > 2)
//        return Fib1(n1 - 2) + Fib1(n1 - 1);
//	return 1;
//}
//
//int Fib2(int n2)//·Çµİ¹E
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    while (n2 > 2)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//        n2--;
//    }
//    return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("µİ¹E%d\n·Çµİ¹E%d\n", Fib1(n), Fib2(n));
//	return 0;
//}

//±àĞ´Ò»¸öº¯Êı reverse_string(char* string)£¨µİ¹éÊµÏÖ£©
//ÊµÏÖ£º½«²ÎÊı×Ö·û´®ÖĞµÄ×Ö·û·´ÏòÅÅÁĞ£¬²»ÊÇÄæĞò´òÓ¡¡£
//ÒªÇó£º²»ÄÜÊ¹ÓÃCº¯Êı¿âÖĞµÄ×Ö·û´®²Ù×÷º¯Êı¡£
//±ÈÈE:
//char arr[] = "abcdef";
//ÄæĞòÖ®ºóÊı×éµÄÄÚÈİ±ä³É£ºfedcba
//#include <stdio.h>
//void reverse_string(char* string)
//{
//	int i = 0;
//	char tmp = *string;
//	if (*(string + 1) != '\0')
//	{
//		reverse_string(string + 1);
//	}
//	*(string - 1)= tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}




////Êı×E
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	arr[0] = 99;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}



//´´½¨Ò»¸öÕûĞÎÊı×é£¬ÍEÉ¶ÔÊı×éµÄ²Ù×E
//ÊµÏÖº¯Êıinit() ³õÊ¼»¯Êı×éÎªÈ«0
//ÊµÏÖprint()  ´òÓ¡Êı×éµÄÃ¿¸öÔªËØ
//ÊµÏÖreverse()  º¯ÊıÍEÉÊı×éÔªËØµÄÄæÖÃ¡£
//ÒªÇó£º×Ô¼ºÉè¼ÆÒÔÉÏº¯ÊıµÄ²ÎÊı£¬·µ»ØÖµ¡£
//#include <stdio.h>
//void init(int arr[],int se) //±E00
//{
//	int i = 0;
//	for (i = 0; i < se; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int se) //´òÓ¡
//{
//	int i = 0;
//	for (i = 0; i < se; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int* left, int* right) //Äæ×ª
//{
//	int tmp = 0;
//	while (left <= right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[3] = { 10,2,3 };
//	int se = sizeof(arr) / sizeof(arr[0]);
//	int* a = &arr[0];
//	int* b = &arr[se-1];
//	print(arr, se); //´òÓ¡ 10 2 3
//	reverse(a, b);  //Äæ×ª
//	print(arr, se);//´òÓ¡ 3 2 10
//	init(arr, se);  //±E
//	print(arr, se);//´òÓ¡ 0 0 0
//	return 0;
//}
//



////test.c ²âÊÔÓÎÏ·µÄÂß¼­
//#include "game.h"
//
//void menu()
//{
//	printf("****************\n");
//	printf("**** 1.play ****\n");
//	printf("**** 0.exit ****\n");
//	printf("****************\n");
//}
//
//void game()
//{
//	char ret = 0; //ÅĞ¶ÏÓÃ
//
//	//´æ·ÅÏÂÆåµÄÊı¾İ
//	char board[ROW][COL] = { 0 };
//
//	//³õÊ¼»¯ÆåÅÌÎªÈ«¿Õ¸E
//	InitBoard(board, ROW, COL);
//
//	//´òÓ¡ÆåÅÌ
//	DisplayBoard(board, ROW, COL);
//
//	while (1)
//	{
//		//Íæ¼ÒÏÂÆE
//		player_move(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//
//		//ÅĞ¶ÏÊäÓ®  Íæ¼ÒÓ®'*'  µçÄÔÓ®'#'  Æ½¾Ö'Q'  ¼ÌĞEC'
//		ret = is_win(board, ROW, COL);
//		if (ret != 'C')
//			break;
//
//
//		//µçÄÔÏÂÆE
//		Computer_move(board, ROW, COL); //Ëæ»úÏÂÆE
//		DisplayBoard(board, ROW, COL);
//		
//		//ÅĞ¶ÏÊäÓ®
//		ret = is_win(board, ROW, COL);
//		if (ret != 'C')
//			break;
//	}
//	if (ret == '*')
//		printf("Íæ¼ÒÓ®\n");
//	else if (ret == '#')
//		printf("µçÄÔÓ®\n");
//	else
//		printf("Æ½¾Ö\n");
//
//}
//
//void test() 
//{
//	int input = 0;
//	do 
//	{
//		menu();
//		srand((unsigned int)time(NULL));
//		printf("ÇE¡ÔE>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//ÓÎÏ·ÊµÏÖ
//			break;
//		case 0:
//			printf("ÍË³öÓÎÏ·\n");
//			break;
//		default:
//			printf("Ñ¡Ôñ´úêó\n");
//			break;
//			
//		}
//	} while (input);
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//
//








//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include "game.h"
//
//void menu()
//{
//	printf("****************\n");
//	printf("**** 1.play ****\n");
//	printf("**** 0.exit ****\n");
//	printf("****************\n");
//}
//
//void game()
//{
//	//É¨À×ÓÎÏ·µÄÊµÏÖ
//	char mine[ROWS][COLS] = { 0 }; //'0'  ²¼ÖÃÀ×
//	char show[ROWS][COLS] = { 0 }; //'*'  ÅÅ²éÀ×
//
//	//³õÊ¼»¯ÆåÅÌ
//	init_board(mine, ROWS, COLS, '0');
//	init_board(show, ROWS, COLS, '*');
//
//	//´òÓ¡ÆåÅÌ
//	//show_board(mine, ROW, COL); //¿´¼ûÀ×
//	//show_board(show, ROW, COL); //Òş²ØÀ×
//
//	//²¼ÖÃÀ×
//	set_mine(mine, ROW, COL);
//	show_board(show, ROW, COL);
//
//	//ÅÅ²éÀ×
//	fine_mine(mine, show, ROW, COL);
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("ÇEäÈE>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("ÍË³öÓÎÏ·\n");
//			break;
//		default:
//			printf("ÊäÈEĞÎEÇEØĞÂÊäÈE\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}













//±àĞ´Ò»¸öº¯Êı reverse_string(char* string)£¨µİ¹éÊµÏÖ£©
//ÊµÏÖ£º½«²ÎÊı×Ö·û´®ÖĞµÄ×Ö·û·´ÏòÅÅÁĞ£¬²»ÊÇÄæĞò´òÓ¡¡£
//ÒªÇó£º²»ÄÜÊ¹ÓÃCº¯Êı¿âÖĞµÄ×Ö·û´®²Ù×÷º¯Êı¡£
//±ÈÈE:
//char arr[] = "abcdef";
//ÄæĞòÖ®ºóÊı×éµÄÄÚÈİ±ä³É£ºfedcba
//#include <stdio.h>
//#include <string.h>
//void reverse_string_no_d(char* str)//²»ÓÃµİ¹E
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = (str + len - 1);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void reverse_string_d(char* str)//µİ¹E
//{
//	int len = strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);    //×ûóó±ä×ûïÒµÄ×Ö·E
//
//	*(str + len - 1) = '\0';    //×ûïÒ×Ö·û±E\0' ,·½±ãÏÂÒ»´Î×Ö·û´®¼ÆËã³¤¶È
//	if (strlen(str + 1) >= 2)    //×Ö·ûÓĞÁ½¸öÒÔÉÏ²Å¼ÌĞøµİ¹E
//	{
//		reverse_string_d(str + 1); //µİ¹E
//	}
//
//	*(str + len - 1) = tmp;
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string_no_d(arr);
//	reverse_string_d(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//±àĞ´Ò»¸öº¯ÊıÊµÏÖnµÄk´Î·½£¬Ê¹ÓÃµİ¹éÊµÏÖ
//#include <stdio.h>
//
//double Power(int n, int k)
//{
//	if (k > 0)
//		return n * Power(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Power(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Power(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}
//


////C99ÖĞÒıÓÃÁË²¼¶ûÀàĞÍ bool
//#include <stdbool.h>  //bool Í·ÎÄ¼ş £¨²¼¶ûÀàĞÍÍ·ÎÄ¼ş£©
//int main()
//{
//	_Bool flag1 = false; //¼Ù
//	bool flag2 = true;  //ÕE
//
//	if (flag2)
//	{
//		printf("hehe\n"); //´òÓ¡hehe £»ÒòÎªflag2±»¸³ÖµÎªÕæ¡£
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//void print1(struct Stu ss)
//{
//	printf("%s %d\n", ss.name, ss.age);
//}
//void print2(struct Stu* ps)
//{
//	printf("%s %d\n", ps->name, ps->age);
//}
//int main()
//{
//	struct Stu s = { "ÕÅÈı", 25 };
//
//	//Òª¸Ä±ä½á¹¹ÌåÄÚµÄ×Ö·û´®µÄ·½·¨:
//	strcpy(s.name, "ÕÅÈı·E); //·½·¨1  ÓÃstrcpyº¯Êı,¸´ÖÆ½øÈ¥
//	print1(s);
//
//	scanf("%s", s.name);//·½·¨2  ÊäÈEøÈ¥ (scanfº¯ÊıĞèÒªµÄ¾ÍÊÇÒ»¸öµØÖ·)
//	print2(&s);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int data1[] = { 1,2,3,4,5 };
//	int data2[] = { 2,3,4,5,6 };
//	int data3[] = { 3,4,5,6,7 };
//	
//	int* arr[3] = { data1,data2,data3 }; //Ö¸ÕEı×E 
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);  //ÀàËÆÊµÏÖ¶şÎ¬Êı×E
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a, b, c;
//    a = 5;
//    c = ++a;// ++a£º¼Ó¸øa+1£¬½á¹ûÎª6£¬ÓÃ¼ÓÍE®ºóµÄ½á¹û¸øc¸³Öµ£¬Òò´Ë£ºa = 6  c = 6
//    b = ++c, c++, ++a, a++;
//
//    // ¶ººÅ±úĞE½µÄÓÅÏÈ¼¶£¬×ûÑÍ£¬ÕâÀEÈËãb=++c, bµÃµ½µÄÊÇ++cºóµÄ½á¹û£¬bÊÇ7
//    // b=++c ºÍºó±ßµÄ¹¹³É¶ººÅ±úĞE½£¬ÒÀ´Î´Ó×óÏòÓÒ¼ÆËãµÄ¡£
//    // ±úĞE½½áÊøÊ±£¬c++ºÍ£¬++a,a++»á¸øa+2£¬¸øc¼Ó1£¬´ËÊ±c£º8£¬a£º8£¬b:7
//
//    b += a++ + c; // aÏÈºÍc¼Ó£¬½á¹ûÎª16£¬ÔÚ¼ÓÉÏbµÄÖµ7£¬±ÈµÄ½á¹ûÎª23£¬×ûÖó¸øa¼Ó1£¬aµÄÖµÎª9
//    printf("a = %d b = %d c = %d\n:", a, b, c); // a:9, b:23, c:8
//    return 0;
//}

//ÊäÈE½¸öÕûÊı£¬ÇóÁ½¸öÕûÊı¶ş½øÖÆ¸ñÊ½ÓĞ¶àÉÙ¸öÎ»²»Í¬
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int ret = 0;
//    int i = 0;
//    scanf("%d %d", &a, &b);
//    c = a ^ b;
//    for (i = 0; i < 32; i++)
//    {
//        if (1 == (c & 1))
//        {
//            ret++;
//        }
//        c >>= 1;
//    }
//    printf("%d\n", ret);
//    return 0;
//}


////»ñÈ¡Ò»¸öÕûÊı¶ş½øÖÆĞòÁĞÖĞËùÓĞµÄÅ¼ÊıÎ»ºÍÆæÊıÎ»£¬·Ö±ğ´òÓ¡³ö¶ş½øÖÆĞòÁĞ
//
//#include <stdio.h>
//void conse(int arr[], int n,int sz)//Ã¿¸ö¶ş½øÖÆÎ»ÄæĞò±£´æÔÚarr
//{
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (0 == (n & 1))
//			arr[(sz - 1) - i] = 0;
//		else
//			arr[(sz - 1) - i] = 1;
//		n >>= 1;
//	}
//}
//	
//void print(int arr[])//´òÓ¡
//{
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int odd = 0;
//	int even = 0;
//	int arr[32] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == (num & 1))
//			odd++; //ÆæÊı 
//		else
//			even++; //Å¼Êı
//		num >>= 1;
//	}
//	printf("ÆæÊıÓĞ:%d Å¼ÊıÓĞ:%d\n", odd, even);
//
//	conse(arr, odd, sz);//±£´æÆæÊıµÄ¶ş½øÖÆÊıÖµ
//	print(arr);//´òÓ¡
//	
//	conse(arr, even, sz);//±£´æÅ¼ÊıµÄ¶ş½øÖÆÊıÖµ
//	print(arr);//´òÓ¡
//	return 0;
//}



//²»ÔÊĞúĞ´½¨ÁÙÊ±±äÁ¿£¬½»»»Á½¸öÕûÊıµÄÄÚÈİ
//#include <stdio.h>
//void Exch(int* a, int* b)
//{
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//int main()
//{
//	int a = 5;
//	int b = 8;
//	printf("½»»»Ç°:a=%d b=%d\n", a, b);
//	Exch(&a, &b);
//	printf("½»»»ºEa=%d b=%d\n", a, b);
//	return 0;
//}

//Ğ´Ò»¸öº¯Êı´òÓ¡arrÊı×éµÄÄÚÈİ£¬²»Ê¹ÓÃÊı×éÏÂ±ê£¬Ê¹ÓÃÖ¸ÕE£
//arrÊÇÒ»¸öÕûĞÎÒ»Î¬Êı×é¡£
//
//#include <stdio.h>
//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	print(p, sz);
//	return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//void rever(char* left, char* right)
//{
//    while (left < right) //½»»»
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char arr[100] = { 0 };
//    gets(arr);//ÊäÈE
//    int ret = strlen(arr);
//    char* left = &arr[0];  //×óµØÖ·
//    char* right = &arr[ret - 1];  //ÓÒµØÖ·
//    rever(left, right);//½»»»
//    printf("%s\n", arr);//Êä³E
//    return 0;
//}

//ÇóSn = a + aa + aaa + aaaa + aaaaaµÄÇ°5Ïûò®ºÍ£¬ÆäÖĞaÊÇÒ»¸öÊı×Ö£¬
//ÀıÈç£º2 + 22 + 222 + 2222 + 22222
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	scanf("%d", &a);
//	a*1 + a*10+a + a*100+
//	return 0;
//}


//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int ret = 0;
//    int c = 0;
//    scanf("%d %d", &a, &b);
//    c = a ^ b; //cµÄ¶ş½øÖÆÊıÃ¿¸E£¬ÊÇaºÍbµÄÒ»¸ö²»Í¬Î»
//    while (c) // c=0Ê±½áÊøÑ­»·
//    {
//        c = c & (c - 1);//Ã¿´ÎÔËĞĞÈ¥µôc¶ş½øÖÆ×ûïÒ±ßµÄÒ»¸E
//        //Èç£º c=10100 (c-1)=10011
//        //c&(c-1)=10000
//        //É¾³ıÁËc×ûïÒ±ßµÄ1
//        ret++;
//    }
//    printf("%d\n", ret);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a; // 6
//	b = ++c, c++, ++a, a++;   //b = 7 ,  c 8  ,a 8  
//
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	while (1 + 2, 5 + 3, 2 * 0)
//	return 0;
//}

//
//#include <stdio.h>
//int i;//0
//int main()
//{
//    //int i ;//Ëæ»úÖµ
//    i--;//-1
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//void Printbit(int num)
//{
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	Printbit(a);
//	return 0;
//
//}


//»ñÈ¡Ò»¸öÕûÊı¶ş½øÖÆĞòÁĞÖĞËùÓĞµÄÅ¼ÊıÎ»ºÍÆæÊıÎ»£¬·Ö±ğ´òÓ¡³ö¶ş½øÖÆĞòÁĞ

//º®¼Ù×÷Òµday 01

//
//struct Sut
//{
//	char name[20];//Ãû×Ö
//	int age;//ÄEE
//	char sex[8];//ĞÔ±E
//	float score;//·ÖÊı
//}s1,s2;//È«¾Ö±äÁ¿
//typedef struct Sut Sut; //ÓÃtypedef ÖØĞÂ¶¨ÒEstruct StuµÄÃû×ÖÎª Sut 
//
////Í¬ÀE
//typedef struct Sut2
//{
//	char name[20];
//	int age;
//	char sex[8];
//	float score;
//}Sut2; //ÕâÀEÄSut2²»ÊÇÈ«¾Ö±äÁ¿£¬Ò²²»ÊÇ±äÁ¿£¬ÕâÀEÇ°Ñstruct Sut2µÄÃû×ÖÖØĞÂ¶¨ÒåÎªSut2
////ÕâÖÖĞ´·¨¾­³£»á³öÏÖÊı¾İ½á¹¹ÖĞ
//
//int main()
//{
//	struct Sut s3;//¾Ö²¿±äÁ¿
//	Sut s4;//ÓÃtypedef ÖØÃEûºóµÄ struct Sut
//
//	Sut2 s1;//ÓÃtypedef ÖØÃEûºóµÄ struct Sut2
//	return 0;
//}
//
//

//
//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}


#include <stdio.h>
#include <assert.h>
unsigned int my_strlen(const char* p)
{
	int i = 0;
	assert(p);
	while (*p++ != '\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char arr[] = "abcd";
	printf("%d\n", my_strlen(arr));
	return 0;
}