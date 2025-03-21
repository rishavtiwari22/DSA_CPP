// 3. Check Palindrome → Check if a number is the same when reversed.
// ex: 12321 => Yes


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int num = n;
    int reversed_num = 0;
    int temp = 0;

    while (num > 0){
        temp = num % 10;
        reversed_num = (reversed_num * 10) + temp;
        num = num / 10;
    }

    if (reversed_num == n){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}