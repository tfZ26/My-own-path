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
	reverse(arr,arr+k-1);//ÄæÐò×ó±ß
	reverse(arr+k,arr+len-1);//ÄæÐòÓÒ±ß
	reverse(arr,arr+len-1);//ÄæÐòÕûÌå
}
int main(void)
{
	char arr[100] = { 0 };
	puts("ÇëÊäÈëÒ»¸ö×Ö·û´®£º\n");
	gets(arr);
	puts("ÄãÏë×óÐý¼¸¸ö×Ö·û£º\n");
	int k;
	int t = scanf("%d", &k);
	left_move(arr,k);
	printf("×óÑ¡%d¸ö×Ö·û´®ºóÎª:\n",k);
	puts(arr);
	return 0;
}