#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num = 1;

    for (int i = 0; i < n; i++)
    {
        int temp = num;

        
        int divisor = 1;
        while (temp / divisor >= 10){
            divisor *= 10;
        }
        for (int j = i; j < n; j++){
            cout << " ";
        }

        while (divisor > 0){
            int val = temp / divisor;
            cout << val << " ";

            temp = temp % divisor;
            divisor = divisor / 10;
        }

        cout << endl;
        num = num * 11;
    }

    return 0;
}
