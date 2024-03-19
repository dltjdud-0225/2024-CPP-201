#include <iostream>
using namespace std;

// 전통적인 C언어는 함수명이 중복될 수 없다.
//함수 오버로딩을 사용하면 함수 이름을 짓는데 부담을 줄일 수 있다.
int sum_int(int a, int b)
{
	return a + b;
}
float sum_float(float a, float b)

{

	return a + b;

}

void main(void)
{
	cout << sum_int(1, 2) << sum_float(1.1f, 2.2f) << endl;
}