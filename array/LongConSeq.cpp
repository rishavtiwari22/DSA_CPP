#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Input arr
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int longest = 0;
    int curr = 1;
    int last = arr[0];

    for (int i = 0; i < n-1; i++){

        if (arr[i] == arr[i+1]){
            continue;
        }else if (arr[i]+1 == arr[i+1]){
            curr++;
            last = arr[i + 1];
        }else{
            curr = 1;
            last = arr[i + 1];
        }
        longest = max(longest, curr);
    }

   
    cout << "Maximum cons seq - " << longest << endl;
}