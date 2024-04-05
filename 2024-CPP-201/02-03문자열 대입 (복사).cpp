#include<iostream>
#include<String>
using namespace std;

int main(void)
{
	string str1 = "juyoung";
	string str2;

	//str2[0] = str1[0];
	//str2[1] = str1[1];
	//str2[2] = str1[2];
	//str2[3] = str1[3];
	//str2[4] = str1[4];
	//str2[5] = str1[5];
	//str2[6] = str1[6];

	//int i = 0;
	//for (; str1[i] != '\0'; i++) {
	//	str2[i] = str1[i];
	//}
	//str2[i] = str1[i];	// '\0'

	//strcpy(str2, str1);
	str2 = str1;

	//printf("%s", str2);
	cout << str2;
}