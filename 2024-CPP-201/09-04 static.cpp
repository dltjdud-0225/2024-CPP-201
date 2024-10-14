#include <iostream>
#include<string>
#include <vector>

using namespace std;

class PrettyJ {
private:
	static int num_;
	int gam_;
	string name_;

public:
	PrettyJ(int gam, string name) : gam_(gam), name_(name) {
		num_++;
	}
	static int* get_address_num(void) { return &num_; }
	static int get_num(void) { return num_; }
	int* get_address_gam(void) { return &gam_; }
	int get_gam(void) { return gam_; }
};
// static ������� �ʱ�ȭ�� �ٱ����� ����
int PrettyJ::num_ = 0;

int main() {
	PrettyJ* jihye = new PrettyJ(508, "����");
	PrettyJ* juyoung = new PrettyJ(509, "�ֿ�");
	PrettyJ* jungmin = new PrettyJ(510, "����");
	cout << "���� ��� �ο��� : " << PrettyJ::get_num() << endl;

	PrettyJ* seoyong = new PrettyJ(511, "����");
	cout << "���� ��� �ο��� : " << PrettyJ::get_num() << endl << endl;;

	cout << "���� gam�� �ּ�" << jihye->get_address_gam() << endl;
	cout << "�ֿ� gam�� �ּ�" << juyoung->get_address_gam() << endl;
	cout << "���� gam�� �ּ�" << jungmin->get_address_gam() << endl;
	cout << "���� gam�� �ּ�" << seoyong->get_address_gam() << endl << endl;

	cout << "���� gam�� �ּ�" << jihye->get_address_num() << endl;
	cout << "�ֿ� gam�� �ּ�" << juyoung->get_address_gam() << endl;
	cout << "���� gam�� �ּ�" << jungmin->get_address_gam() << endl;
	cout << "���� gam�� �ּ�" << seoyong->get_address_gam() << endl << endl;

	delete seoyong;
	delete jungmin;
	delete juyoung;
	delete jihye;

}
