#include <iostream>
#include <string>

using namespace std;

class Animal {
public:      // 멤버 함수
    Animal() {

    }

    Animal(string name, unsigned int age)
        : name_(name), age_(age)
    {
        cout << "이름 " << name_ << endl;
        cout << "나이 " << age_ << endl;
    }
    virtual ~Animal() {
        cout << "Animal 소멸자" << endl;
    }
    //실제가 없으므로 순수가상함수로 처리(자식 클래스에서 정의해야함)
    virtual void bark() = 0;
    virtual void sleep() = 0;
    virtual void eat() = 0;

    virtual void bark() {
        cout << "잘 짖는다." << endl;
    }

    virtual void sleep() {
        cout << "잘 잔다." << endl;
    }

    virtual void eat() {
        cout << "잘 먹는다." << endl;
    }

private:      // 멤버 변수
    string name_;
    unsigned int age_;      // 음의 부호가 없는 int

};

class Human : public Animal {
public:
    // 부모(Animal) 생성자가 먼저 호출된다.
    Human(string name, unsigned int age, bool right)
        : Animal(name, age), right_(right)
    {
        cout << "인권존재여부 " << right_ << endl;
    }
    virtual ~Human() {
        cout << "Human 소멸자" << endl;
    }

    //TODO : 정적 바인딩을 동적바인딩으로 고치기
    void bark() override {
        cout << "톡톡" << endl;
    }

    void sleep() override {
        cout << "쿨쿨" << endl;
    }

    void eat() override {
        cout << "냠냠" << endl;
    }

private:
    bool right_;
};

void main(void)
{
    //추상클래스(순수가상함수가 있는)는 객체를 생성할 수 없다
    Animal* ani = new Animal("정민레이디", 18);      // 동적할당
    ani->bark();
    ani->eat();
    ani->sleep();
    delete ani;      // 할당 해제

    //ani의 자료형은 Animal*
    ani = new Human("지혜레이디", 18, true);      // 동적할당
    //정적 바인딩으로 인해 Animal의 멤버함수가 호출된다.
    ani->bark();
    ani->eat();
    ani->sleep();

    delete ani;      // 할당 해제

}