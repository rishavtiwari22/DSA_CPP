#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int curr = 0;
    int maxi = arr[0];
    int st = 0;
    int end = 0;
    int start = 0;

    for (int i = 0; i < n; i++){
        if (curr == 0){
            st = i;
        }
        curr = curr + arr[i];

        if (curr < arr[i]){
            curr = arr[i];
            start = i;
           
        }

        if (curr  > maxi){
            maxi = curr;
            st = start;
            end = i;
        }

    }

    cout << "Max array sum - " << maxi << " and st , end - " << st << end << endl;
}