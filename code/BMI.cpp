#include <iostream>
using namespace std;

int main() {
    // 変数
    double height;
    double weight;
    double bmi;

    // 入力してもらう
    cout << "Height (m): ";
    cin >> height;

    cout << "Weight (kg): ";
    cin >> weight;

    // 計算
    bmi = weight/height/height;

    // 表示
    cout << "Your BMI: " << bmi << endl;

    if (bmi<18.5) {
        cout << "Too slim." << endl;
    }

    return 0;
}