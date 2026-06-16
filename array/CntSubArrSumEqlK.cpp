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

    int k;
    cout << "Enter value of K - ";
    cin >> k;

    int j = 0;
    int count = 0;
    int sum = 0;
    int i = 0;

    while (i < n){
        sum += arr[i];
        if (sum == k){
            count++;
            sum -= arr[j];
            j++;
            i++;
        }
        else if (sum > k){
            sum -= arr[j];
            sum -= arr[i];
            j++;
        }
        else{
            i++;
        }
    }

    cout << "Printing count here - " << count << endl;
}