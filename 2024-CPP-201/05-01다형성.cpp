#include<iostream>
#include<string>
using namespace std;

class Animal {
public: // �޼��带 public���� ����
    Animal(string name, unsigned int age)
        : name_(name), age_(age) {
        cout << "�̸�" << name_ << endl;
        cout << "����" << age_ << endl;
    }
    void bark() {
        cout << "�� ¢�´�" << endl;
    }

    void sleep() {
        cout << "�� �ܴ�" << endl;
    }

    void eat() {
        cout << "�� �Դ´�" << endl;
    }

private:
    string name_;
    unsigned int age_;
};

class human : public Animal {
public:

private:
    bool right_;
};


int main() { // ��ȯ���� int�� ����
    Animal* ani = new Animal("���η��̵�", 18);

    ani->bark();
    ani->sleep();
    ani->eat();



    delete ani;

    return 0; // int ��ȯ���̹Ƿ� return 0; �߰�
}
