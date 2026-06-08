#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> vec(n);

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        ans ^= vec[i];
    }

    cout << "Only once appear - " << ans << endl;
}