#include <iostream>

using namespace std;

// enum ����
enum FoodStyle {
    Korean,  // 0
    Japanese, // 1
    Chinese   // 2
};

int main(void) {
    // enum ���� ���
    FoodStyle style = Korean;

    switch (style) {
    case Korean:
        cout << "�ѽ�" << endl;
        break;
    case Japanese:
        cout << "�Ͻ�" << endl;
        break;
    case Chinese:
        cout << "�߽�" << endl;
        break;
    }

    return 0;
}
