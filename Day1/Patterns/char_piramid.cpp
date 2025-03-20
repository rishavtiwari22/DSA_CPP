#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int num = 65;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        for (int j = 0; j <= i; j++){
            cout << (char)(num+j);
        }

        for (int j = i; j > 0; j--){
            cout << (char)(num+j-1);
        }
        cout << endl;
    }


    return 0;
}