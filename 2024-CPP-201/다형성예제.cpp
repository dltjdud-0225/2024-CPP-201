#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Clothes {
public:
    Clothes(string name, int price, int making_time, int beauty)
        : name_(name), price_(price), making_time_(making_time), beauty_(beauty)
    {}
    virtual void show() {
        cout << "�̸� : " << name_ << endl;
        cout << "���� : " << price_ << endl;
        cout << "����� �ð� : " << making_time_ << endl;
        cout << "�Ƹ��ٿ� : " << beauty_ << endl;
    }

    //�ڽ� Ŭ�������� �����ϰڴ�
    /*
    virtual void attack(Hanbok* target) = 0;
    virtual void attack(Kimono* target) = 0;
    virtual void attack(Chipao* target) = 0;
    */
    //������
    virtual void attack(Clothes* target) = 0;
    //*����

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
    void show() {
        Clothes::show();
        cout << "�븮�� : " << norigae_ << endl;
        cout << "���� : " << jugori_ << endl;
    }

    void attack(Clothes* target) {
        //TOBO : �� 3Ÿ���� ġ��Ÿ�� �ֱ�
        attack_count_++;
        if (attack_count_ == 3) {
            target->beauty_ -= beauty_ * 2;
            attack_count_ = 0;
        }
        else
            target->beauty_ -= beauty_;
    }

    int norigae_;        // �븮��
    int jugori_;        // ����
    int attack_count_;  // ���� Ƚ��
};

class Kimono : public Clothes {
public:
    Kimono(string name, int price, int making_time, int beauty, int belt)
        : Clothes(name, price, making_time, beauty), belt_(belt)
    {}
    void show() {
        Clothes::show();
        cout << "��Ʈ : " << belt_ << endl;
    }

    void attack(Clothes* targe) {
        targe->beauty_ -= beauty_;
    }

    int belt_;            // ����
};

class Chipao : public Clothes {
public:
    Chipao(string name, int price_, int making_time, int beauty, int embroidery)
        : Clothes(name, price_, making_time, beauty), embroidery_(embroidery)
    {}
    void show() {
        Clothes::show();
        cout << "�ڼ� : " << embroidery_ << endl;
    }

    void attack(Clothes* targe) override
    {
        targe->beauty_ -= beauty_;
    }

private:
    int embroidery_;    // �ڼ�
};

int main(void) {
    Clothes* player = new Hanbok("�����", 100, 10, 9999, 0, 0);
    Clothes* chingu = new Kimono("��������", 10, 1, 9, 1);

    player->show();
    chingu->show();
    int choice;

    cout << "----------------------------------" << endl;
    cout << "1. ����" << endl;
    cout << "2. Ư������1" << endl;
    cout << "3. Ư������2" << endl;
    cout << "4. ����" << endl;

    while (true) {
        system("cls");
        player->show();
        cout << endl << endl;
        chingu->show();

        cout << "----------------------------------" << endl;
        cout << "1. ����" << endl;
        cout << "2. Ư������1" << endl;
        cout << "3. Ư������2" << endl;
        cout << "4. ����" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            player->attack(chingu);
            break;
        case 2:
            cout << "Ư������1" << endl;
            break;
        case 3:
            cout << "Ư������2" << endl;
            break;
        case 4:
            cout << "����" << endl;
            break;
        default:
            break;
        }

    }

    delete chingu;
    delete player;


}
