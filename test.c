#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void my_strncmp(char* zfc1, const char* zfc2, int n)
{
	int k = 0;
	while (*zfc2 != '\0' && k < n)
	{
		*zfc1 = *zfc2;
		zfc1++;
		zfc2++;
		k++;
	}
	while (*zfc2 == '\0')
	{
		*zfc1 = *zfc2;
		break;
	}
}
int main(void)
{
	char zfc1[20];
	char zfc2[20];
	int n;
	puts("请输入一个字符串：\n");
	scanf("%s", zfc1);
	puts("请输入另一个字符串：\n");
	scanf("%s", zfc2);
	puts("请输入想复制过去的字符个数：\n");
	scanf("%d",&n);
	my_strncmp(zfc1,zfc2,n);
	puts("操作结果为：\n");
	printf("%s", zfc1);
}