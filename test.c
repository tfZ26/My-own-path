#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
reverse(char*left,char*right)
{
	assert(left);
	assert(right);
	while(left<right)
	{
		char temp;
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}

}

void left_move(char* arr,int k)
{
	assert(arr);
	int len = strlen(arr);
	reverse(arr,arr+k-1);//�������
	reverse(arr+k,arr+len-1);//�����ұ�
	reverse(arr,arr+len-1);//��������
}
int main(void)
{
	char arr[100] = { 0 };
	puts("������һ���ַ�����\n");
	gets(arr);
	puts("�������������ַ���\n");
	int k;
	int t = scanf("%d", &k);
	left_move(arr,k);
	printf("��ѡ%d���ַ�����Ϊ:\n",k);
	puts(arr);
	return 0;
}