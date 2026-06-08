#include <iostream>
using namespace std;


void feb(int n, int a, int b){

    if (n <= 1){
        return;
    }

    int c = a + b;
    a = b;
    b = c;
    cout << c << endl;
    feb(n - 1, a, b);
}

int main() {

    int n;
    cout << "Enter value : ";
    cin >> n;

    cout << 0 << endl;
    cout << 1 << endl;
    feb(n, 0, 1);
}
