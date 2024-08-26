#include <iostream>
#include <string>

using namespace std;

class Animal {
public:      // ��� �Լ�
    Animal() {

    }

    Animal(string name, unsigned int age)
        : name_(name), age_(age)
    {
        cout << "�̸� " << name_ << endl;
        cout << "���� " << age_ << endl;
    }
    virtual ~Animal() {
        cout << "Animal �Ҹ���" << endl;
    }
    //������ �����Ƿ� ���������Լ��� ó��(�ڽ� Ŭ�������� �����ؾ���)
    virtual void bark() = 0;
    virtual void sleep() = 0;
    virtual void eat() = 0;

    virtual void bark() {
        cout << "�� ¢�´�." << endl;
    }

    virtual void sleep() {
        cout << "�� �ܴ�." << endl;
    }

    virtual void eat() {
        cout << "�� �Դ´�." << endl;
    }

private:      // ��� ����
    string name_;
    unsigned int age_;      // ���� ��ȣ�� ���� int

};

class Human : public Animal {
public:
    // �θ�(Animal) �����ڰ� ���� ȣ��ȴ�.
    Human(string name, unsigned int age, bool right)
        : Animal(name, age), right_(right)
    {
        cout << "�α����翩�� " << right_ << endl;
    }
    virtual ~Human() {
        cout << "Human �Ҹ���" << endl;
    }

    //TODO : ���� ���ε��� �������ε����� ��ġ��
    void bark() override {
        cout << "����" << endl;
    }

    void sleep() override {
        cout << "����" << endl;
    }

    void eat() override {
        cout << "�ȳ�" << endl;
    }

private:
    bool right_;
};

void main(void)
{
    //�߻�Ŭ����(���������Լ��� �ִ�)�� ��ü�� ������ �� ����
    Animal* ani = new Animal("���η��̵�", 18);      // �����Ҵ�
    ani->bark();
    ani->eat();
    ani->sleep();
    delete ani;      // �Ҵ� ����

    //ani�� �ڷ����� Animal*
    ani = new Human("�������̵�", 18, true);      // �����Ҵ�
    //���� ���ε����� ���� Animal�� ����Լ��� ȣ��ȴ�.
    ani->bark();
    ani->eat();
    ani->sleep();

    delete ani;      // �Ҵ� ����

}