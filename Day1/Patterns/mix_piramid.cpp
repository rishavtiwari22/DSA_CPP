#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int num = (n*2)-1;

    for (int i = 0; i < n; i++){
        for ( int j = 0; j < n-1-i; j++){
            cout << " ";
        }

        for ( int j = 0; j <= i+i; j++){
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        
        for (int j = 0; j < num; j++){
            cout << "*";
        }
        num-=2;
        cout << endl;
    }

    return 0;
}