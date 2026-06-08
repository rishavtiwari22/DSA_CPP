#include <bits/stdc++.h>
using namespace std;

int main() {

    string st;
    cin >> st;

    int arr[256] = {0};
    for (int i = 0; i < st.size(); i++){
        arr[st[i]]++;
    }

    int q;
    cin >> q;

    while(q--){
        char c;
        cin >> c;
        cout << arr[c] << endl;
    }
}