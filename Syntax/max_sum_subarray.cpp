#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cout << "Enter the lenght of array : ";
    cin >> a;

    vector<int> vec(a);
    for (int i = 0; i < a; i++)
    {
        cout << "Enter the " << i + 1 << "st value of array : ";
        cin >> vec[i];
        cout << endl;
    }

    int temp = 0;
    int best = 0;

    for (int j = 0; j < a; j++)
    {
        temp = max(vec[j], temp + vec[j]);
        best = max(temp, best);
    }

    cout << best << '\n';
}