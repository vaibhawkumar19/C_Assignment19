//1. Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[5][10];
	int i,j,count;
	for(i=0;i<=4;i++)
	{
		gets(str[i]);
		count=0;
		for(j=1;j<strlen(str[i]);j++)	
		{
		if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u')
		count++;
		}
	printf("\ntotal number of vowel is %d=%d\n",i+1,count);
	}
	return 0;
}
