// 1. Count Digits → Count the number of digits in a given number.
// ex: 1234 => 4

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Number : " << n << " \n";
    int count = 0;

    while (n > 0){
        n = n / 10;
        count++;
    }

    cout << "Total digit : " << count << endl;

    return 0;
}