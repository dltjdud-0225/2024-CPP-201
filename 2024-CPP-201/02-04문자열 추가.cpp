#include<stdio.h>
#include<string.h>

void main(void)
{
	char str1[100] = "juyoung";
	//문장열 추가
	strcat(str1, " is pretty💖");

	printf("%s ", str1);
}