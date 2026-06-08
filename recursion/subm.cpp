#include <bits/stdc++.h>
using namespace std;


void print(int i,int sub){
    if (i < 1){
        cout << sub;
        return;
    }

    print(i - 1, sub + i);
}

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    print(n, 0);
}