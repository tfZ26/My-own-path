#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* z1, const char* z2)
{
	assert(z1);
	assert(z2);
	char* s1 = (char*)z1;
	char* s2 = (char*)z2;
	char* temp = (char*)z1;

	while (1)
	{
		if (!*z2)
		{
			return (char*)z1;
		}
		while (*temp != *s2)
		{
			temp++;
			if(*temp=='\0')
				return NULL;
		}
		s1 = temp;
		while (*s1==*s2&&*s1!='\0'&&*s2!='\0') 
		{
			s1++;
			s2++;
			if (*s2 == '\0')
			{
				return temp;
			}
		}
		s2 = (char*)z2;
		temp++;
	}

}
int main(void)
{
	char zfc1[30] = { 0 };
	char zfc2[30] = { 0 };
	puts("�������ַ�������\n");
	puts("������һ���ַ�����->\n");
	gets(zfc1);
	puts("����������һ���ַ�����->\n");
	gets(zfc2);
	char* ret = my_strstr(zfc1,zfc2);
	if (ret != NULL)
	{
		printf("%s\n", ret);
	}
	else
	{
		printf("������\n");
	}


	return 0;
}