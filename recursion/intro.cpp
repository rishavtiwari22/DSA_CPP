#include <bits/stdc++.h>
using namespace std;


void printnum(int i, int n){
    if (n <= i)
    {
        return;
    }

    cout << n << endl;
    printnum(i, --n);
}

int main(){
    int n;
    int i = 0;
    cout << "Enter value of n: ";
    cin >> n;

    printnum(i, n);
    return 0;
}