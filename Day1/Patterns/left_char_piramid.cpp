#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    for (int i = 0; i < n; i++){
        int st = 65;
        for (int j = 0; j <= i; j++){
            cout << (char)(st+j);
        }
        cout << endl;
    }


    return 0;
}