#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    map<int, int> mpp;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    int ele1 = arr[0] - 1;
    int cnt1 = 0;
    int ele2 = arr[0] - 2;
    int cnt2 = 0;

    for (int i = 0; i < n; i++){
        if (cnt1 == 0 && ele2 != arr[i]){
            ele1 = arr[i];
            cnt1 = 1;
        }else if (cnt2 == 0 && ele1 != arr[i]){
            ele2 = arr[i];
            cnt2 = 1;
        }else if(ele1 == arr[i]){
            cnt1++;
        }else if (ele2 == arr[i]){
            cnt2++;
        }else{
            cnt1--;
            cnt2--;
        }
    }
    vector<int> ls;
    cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == ele1) cnt1++;
        if (arr[i] == ele2)cnt2++;
    }

    if (cnt1 >= (int)(n / 2)){
        ls.push_back(ele1);
    }
    if (cnt2 >= (int)(n / 2)){
        ls.push_back(ele2);
    }
    sort(ls.begin(), ls.end());

    cout << "Mejority elements are - " << ls[0] << ", " << ls[1] << endl;
}