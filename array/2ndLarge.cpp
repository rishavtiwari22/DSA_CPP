#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];
    int second_largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= largest){
            second_largest = largest;
            largest = arr[i];
        }else{
            if (arr[i] > second_largest){
                second_largest = arr[i];
            }
        }
    }

    cout << "Largest Number -> " << largest << endl;
    cout << "Second Largest Number -> " << second_largest << endl;

    return 0;
}