#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>

int main()
{
	int* ptr = (int*)malloc(10* sizeof(int));
	if (NULL != ptr)
	{
		//使用空间
		//..
	}
	//拓展扩容
	int* ptr2 = (int*)realloc(ptr, 100 * sizeof(int));
	if (NULL != ptr2)
	{
		//防止ptr被置为NULL，导致空间丢失
		ptr = ptr2;
		ptr2 = NULL;
	}
	else
		perror("realloc");
	//使用空间
	//..
	//归还空间
	free(ptr);
 	ptr = NULL;
	return 0;
}



