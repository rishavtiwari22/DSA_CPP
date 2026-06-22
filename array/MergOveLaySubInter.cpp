#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(2));
    for (int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    // if (n <= 1) cout << arr[0][0] << arr[0][1] << endl;

    // int count = 0;
    // int maxi = arr[0][1];
    // int mini = arr[0][0];
    // int num = 0;
    // for (int i = 1; i < n; i++){
    //     if (arr[i][0] >= mini && arr[i][0] <= maxi){
    //         maxi = max(maxi, arr[i][1]);
    //         mini = min(mini, arr[i][0]);
    //         arr[count] = { mini, maxi };
    //         count++;
    //         num++;
    //     }else{
    //         arr[count] = {arr[i][0], arr[i][1]};
    //         count++;
    //     }
    // }
    sort(arr.begin(), arr.end());

    int idx = 0;

    for (int i = 1; i < arr.size(); i++)
    {

        if (arr[idx][1] >= arr[i][0])
        {
            arr[idx][1] = max(arr[idx][1], arr[i][1]);
        }
        else
        {
            idx++;
            arr[idx] = arr[i];
        }
    }

    arr.resize(idx + 1);
    // return arr;

    for (int i = 0; i < arr.size(); i++){
        cout << "Merged Intervales - " << arr[i][0] << " - " << arr[i][1] << endl;
    }
}