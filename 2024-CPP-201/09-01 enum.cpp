#include <iostream>

using namespace std;

// enum 선언
enum FoodStyle {
    Korean,  // 0
    Japanese, // 1
    Chinese   // 2
};

void main(void) {
    // enum 값을 사용
    FoodStyle style = FoodStyle::Korean;
    switch (style) {
    case FoodStyle::Korean:
        cout << "한식" << endl;
        break;
    case FoodStyle::Japanese:
        cout << "일식" << endl;
        break;
    case FoodStyle::Chinese:
        cout << "중식" << endl;
        break;
    }
}
