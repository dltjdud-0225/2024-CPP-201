#include <iostream>
#include <string>

// 개 클래스 정의
class Dog {
public:
    // 생성자
    Dog(const std::string& name, int age) : name(name), age(age) {}

    // 함수: 개의 이름과 나이를 출력
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

    // 개의 나이를 반환
    int getAge() const {
        return age;
    }

protected:
    std::string name; // 개의 이름
    int age;          // 개의 나이
};

// 강아지 클래스 정의 (Dog 클래스로부터 상속)
class Puppy : public Dog {
public:
    // 생성자
    Puppy(const std::string& name, int age, const std::string& favoriteToy)
        : Dog(name, age), favoriteToy(favoriteToy) {}

    // 함수: 강아지의 이름, 나이와 좋아하는 장난감을 출력
    void display() const {
        Dog::display(); // 부모 클래스의 display 함수 호출
        std::cout << "Favorite Toy: " << favoriteToy << std::endl;
    }

private:
    std::string favoriteToy; // 강아지가 좋아하는 장난감
};

int main() {
    // 개 객체 생성
    Dog dog("Buddy", 5);
    dog.display();

    // 강아지 객체 생성
    Puppy puppy("Charlie", 1, "Rubber Ball");
    puppy.display();

    return 0;
}
