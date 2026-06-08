#include <bits/stdc++.h>
using namespace std;

int main() {

    int a;
    // string st;
    cout << "Enter the value of a :";
    cin >> a;
    // cout << "Enter the value of st :";
    // cin >> st;
    
    // cout << "a == " << a << '\n';
    // cout << "st == " << st << '\n';

    // int arr[a];
    // int sum = 0;
    string sm = "";

    for (int i = 1; i <= a; i++){

        sm += string(a - i, ' ');
        sm += string(i, '*');
        sm += '\n';

    }
    cout << sm;

    // cout << arr[0];
    // cout << arr[1];
    // cout << arr[2];
    // cout << arr[3];
    // cout << arr[4];
    // cout << sum;

    return 0;
}