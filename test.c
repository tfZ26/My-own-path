#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strcmp(const char* arr1,const char* arr2)
{
	assert(arr1 && arr2);
	while (*arr1 == *arr2)
	{
		
		if (*arr1 == '\0')
		{
			return 0;
		}
		arr1++;
		arr2++;
	}
	if (*arr1 > *arr2)
	{
		return 1;
	}
	if (*arr1 < *arr2)
	{
		return -1;
	}



	
}
int main(void)
{
	char arr1[30] = { "bcde"};
	char arr2[30] = { "bcde"};
	int ret = my_strcmp(arr1, arr2);
	if (ret == 1)
	{
		printf("arr1大");
	}
	else
	{
		if (ret == -1)
		{
			printf("arr2大");
		}
		else
		{
			printf("一样大");
		}
	}
	return 0;
}