#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << j+1;
        }
        for (int j = 1; j < n-i; j++){
            cout << " ";
        }
        for (int j = 1; j < n-i; j++){
            cout << " ";
        }
        for (int j = i+1; j > 0; j--){
            cout << j;
        }
        cout << endl;

    }


    return 0;
}