#include<iostream>
#include<string>

using namespace std;


class Animal{
public:
	Animal(string name, unsigned int age)
		: name_(name), age_(age)
	{
		cout << "�̸�" << name_ << endl;
		cout << "����" << age_ << endl;
 	}
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
	string name_;
	unsigned int age_;
	
};

class Human : public Animal {
public:
private:

};

void main(void)
{
	Animal* ani = new Animal("���η��̵�", 18);
	ani->bark();
	ani->eat();
	ani->sleep();

	delete ani;

}