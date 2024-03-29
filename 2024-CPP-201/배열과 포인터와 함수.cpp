#include<stdio.h>

//배열의 모든 원소를 0으로 한다
void erase(int*_arr, int _length) {

	for (int i = 0; i < _length; i++)
		_arr[i] = 0;
}

int main(void) 
{
	int arr[4] = { 10, 20, 30, 40 };
	int legth = sizeof(arr) / sizeof(*arr);
	erase(arr, legth);

	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}

	//printf("%d %d\n", arr[0]);
	//printf("%d %d\n", arr[1]);
	//printf("%d %d\n", arr[2]);
	//printf("%d %d\n", arr[3]);






	return 0;
}

