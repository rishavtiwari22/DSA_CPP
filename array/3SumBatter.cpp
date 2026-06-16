#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    set<vector<int>> st;
    for (int i = 0; i < n; i++){
        set<int> hashSet;
        for (int j = i+1; j < n; j++){
            int third = -(arr[i] + arr[j]);
            if (hashSet.find(third) != hashSet.end()){
                vector<int> temp = {arr[i], arr[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashSet.insert(arr[j]);
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());


    
    for (int i = 0; i < ans.size(); i++){
        for (int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    cout << endl;
}