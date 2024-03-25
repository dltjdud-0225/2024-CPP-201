#include<iostream>

using namespace std;		

void call_by_value(int* a)
{
	//새로운 지역변수를 a를 만들고 a가 가르키고 있는 대상의 값을 바꾼다.
	*a = 10;
}

int main(void) 
{
	int num = 3;

	//num의 값이 바뀐다.
	call_by_value(&num);
	cout << num;


	return 0;
}

