#include <iostream>

using namespace std;

// enum ����
enum FoodStyle {
    Korean,  // 0
    Japanese, // 1
    Chinese   // 2
};

void main(void) {
    // enum ���� ���
    FoodStyle style = FoodStyle::Korean;
    switch (style) {
    case FoodStyle::Korean:
        cout << "�ѽ�" << endl;
        break;
    case FoodStyle::Japanese:
        cout << "�Ͻ�" << endl;
        break;
    case FoodStyle::Chinese:
        cout << "�߽�" << endl;
        break;
    }
}
