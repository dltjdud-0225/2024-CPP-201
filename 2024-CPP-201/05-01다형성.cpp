#include<iostream>
#include<string>

using namespace std;


class Animal{
public:
	void bark()
	{
		cout << "Àß Â¢´Â´Ù" << endl;
	}

	void sleep()
	{
		cout << "Àß ÀÜ´Ù" << endl;
	}
	
	void eat()
	{
		cout << "Àß ¸Ô´Â´Ù" << endl;
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