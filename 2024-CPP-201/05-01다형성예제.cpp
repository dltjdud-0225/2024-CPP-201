#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;

public:
    Animal(std::string n) : name(n) {}

    void aName(std::string n) {
        name = n;
    }

    std::string bName() const {
        return name;
    }

    virtual void speak() const {
        std::cout << name << "¢��" << std::endl;
    }
};

class Dog : public Animal {
public:
    Dog(std::string n) : Animal(n) {}

    void speak() const override {
        std::cout << name << "�۸�" << std::endl;
    }
};

class Cat : public Animal {
public:
    Cat(std::string n) : Animal(n) {}

    void speak() const override {
        std::cout << name << "�߿�" << std::endl;
    }
};

int main() {
    Animal cuteAnimal("����");
    Dog myDog("�� ");
    Cat myCat("����� ");

    cuteAnimal.speak();
    myDog.speak();          
    myCat.speak();          

    Animal* PrettyAnimal = &myDog;
    PrettyAnimal->speak();

    PrettyAnimal = &myCat;
    PrettyAnimal->speak();
    return 0;
}
