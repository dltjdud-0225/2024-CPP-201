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
        std::cout << name << "Â¢´Ù" << std::endl;
    }
};

class Dog : public Animal {
public:
    Dog(std::string n) : Animal(n) {}

    void speak() const override {
        std::cout << name << "¸Û¸Û" << std::endl;
    }
};

class Cat : public Animal {
public:
    Cat(std::string n) : Animal(n) {}

    void speak() const override {
        std::cout << name << "¾ß¿Ë" << std::endl;
    }
};

int main() {
    Animal cuteAnimal("µ¿¹°");
    Dog myDog("°³ ");
    Cat myCat("°í¾çÀÌ ");

    cuteAnimal.speak();
    myDog.speak();          
    myCat.speak();          

    Animal* PrettyAnimal = &myDog;
    PrettyAnimal->speak();

    PrettyAnimal = &myCat;
    PrettyAnimal->speak();
    return 0;
}
