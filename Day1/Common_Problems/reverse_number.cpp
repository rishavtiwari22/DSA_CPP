// 2. Reverse a Number → Reverse the digits of a number.
// ex: 1234 => 4321


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int num = 0;
    int temp;
    cout << "Number : " << n << endl;

    while (n > 0){
        temp = n % 10;
        num = (num * 10) + temp;
        n = n / 10;
    }
    cout << "Reversed Number : " << num << endl;

    return 0;
}