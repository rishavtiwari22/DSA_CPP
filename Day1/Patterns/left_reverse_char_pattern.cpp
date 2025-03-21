#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int num = 65+n-1;

    for (int i = 0; i < n; i++){
        for (int j = num-i; j <= num; j++){
            cout <<(char)(j) << " ";
        }
        cout << endl;
    }
    return 0;
}
