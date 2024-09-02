#include <iostream>
#include <string>

using namespace std;

class Clothes {
public:
    Clothes(string name, int price, int making_time, int beauty)
        : name_(name), price_(price), making_time_(making_time), beauty_(beauty)
    {}

    virtual void show()
    {
        cout << "�̸� : " << name_ << endl;
        cout << "���� : " << price_ << endl;
        cout << "����� �ð� : " << making_time_ << endl;
        cout << "������ : " << beauty_ << endl;
    }

private:
    string name_;
    int price_;
    int making_time_;
    int beauty_;
};

class Hanbok : public Clothes {
public:
    Hanbok(string name, int price, int making_time, int beauty, int norigae, int jugori)
        : Clothes(name, price, making_time, beauty), norigae_(norigae), jugori_(jugori)
    {}

    void show()
    {
        Clothes::show();
        cout << "�븮�� : " << norigae_ << endl;
        cout << "���� : " << jugori_ << endl;
    }

private:
    int norigae_;        // �븮��
    int jugori_;        // ����
};

class Kimono : public Clothes {
public:
    Kimono(string name, int price, int making_time, int beauty, int belt)
        : Clothes(name, price, making_time, beauty), belt_(belt)
    {}

    void show()
    {
        Clothes::show();
        cout << "���� : " << belt_ << endl;
    }

private:
    int belt_;            // ����
};

class Chipao : public Clothes {
public:
    Chipao(string name, int price, int making_time, int beauty, int embroidery)
        : Clothes(name, price, making_time, beauty), embroidery_(embroidery)
    {}

    void show()
    {
        Clothes::show();
        cout << "�ڼ� : " << embroidery_ << endl;
    }

private:
    int embroidery_;    // �ڼ�
};

int main(void) {
    Clothes* player = new Hanbok("�����", 100, 10, 9999, 0, 0);
    Clothes* chingu = new Kimono("��������", 50, 5, 50, 1);

    player->show();

    delete chingu;
    delete player;
}
