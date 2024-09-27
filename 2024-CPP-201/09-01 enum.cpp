#include <iostream>

using namespace std;

// enum 선언
enum FoodStyle {
    Korean,  // 0
    Japanese, // 1
    Chinese   // 2
};

int main(void) {
    // enum 값을 사용
    FoodStyle style = Korean;

    switch (style) {
    case Korean:
        cout << "한식" << endl;
        break;
    case Japanese:
        cout << "일식" << endl;
        break;
    case Chinese:
        cout << "중식" << endl;
        break;
    }

    return 0;
}
