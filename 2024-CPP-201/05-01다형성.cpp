#include<iostream>
#include<string>

using namespace std;


class Animal{
public:
	void bark()
	{
		cout << "�� ¢�´�" << endl;
	}

	void sleep()
	{
		cout << "�� �ܴ�" << endl;
	}
	
	void eat()
	{
		cout << "�� �Դ´�" << endl;
	}

private:
	string name;
	unsigned int age;
	
};

void main(void)
{
	Animal* ani = new Animal();
	ani->bark();
	ani->eat();
	ani->sleep();

	delete ani;

}