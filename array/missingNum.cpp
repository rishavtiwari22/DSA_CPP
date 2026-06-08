#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++){
        cin >> vec[i];
    }

    int total = (n + 1) * ((n + 1) + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += vec[i];
    }

    cout << "Missing number is - " << total - sum << endl;
}