#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> vec(n);
    int maxi = 0;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if (vec[i] == 1){
            curr++;
            if (maxi < curr)
            {
                maxi = curr;
            }
        }else{
            curr = 0;
        }
    }
    int ans = max(curr, maxi);
    cout << "Maximum consecutive ones - " << ans << endl;
}