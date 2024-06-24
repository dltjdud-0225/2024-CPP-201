#include <iostream>
#include <string>

// �� Ŭ���� ����
class Dog {
public:
    // ������
    Dog(const std::string& name, int age) : name(name), age(age) {}

    // �Լ�: ���� �̸��� ���̸� ���
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

    // ���� ���̸� ��ȯ
    int getAge() const {
        return age;
    }

protected:
    std::string name; // ���� �̸�
    int age;          // ���� ����
};

// ������ Ŭ���� ���� (Dog Ŭ�����κ��� ���)
class Puppy : public Dog {
public:
    // ������
    Puppy(const std::string& name, int age, const std::string& favoriteToy)
        : Dog(name, age), favoriteToy(favoriteToy) {}

    // �Լ�: �������� �̸�, ���̿� �����ϴ� �峭���� ���
    void display() const {
        Dog::display(); // �θ� Ŭ������ display �Լ� ȣ��
        std::cout << "Favorite Toy: " << favoriteToy << std::endl;
    }

private:
    std::string favoriteToy; // �������� �����ϴ� �峭��
};

int main() {
    // �� ��ü ����
    Dog dog("Buddy", 5);
    dog.display();

    // ������ ��ü ����
    Puppy puppy("Charlie", 1, "Rubber Ball");
    puppy.display();

    return 0;
}
