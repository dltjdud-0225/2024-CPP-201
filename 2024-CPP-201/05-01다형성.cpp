#include<iostream>
#include<string>

using namespace std;


class Animal{
public:
	Animal(string name, unsigned int age)
		: name_(name), age_(age)
	{
		cout << "ÀÌ¸§" << name_ << endl;
		cout << "³ªÀÌ" << age_ << endl;
 	}
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
	string name_;
	unsigned int age_;
	
};

class Human : public Animal {
public:
private:

};

void main(void)
{
	Animal* ani = new Animal("Á¤¹Î·¹ÀÌµð", 18);
	ani->bark();
	ani->eat();
	ani->sleep();

	delete ani;

}