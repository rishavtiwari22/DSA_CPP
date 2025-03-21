#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int arr[n][n];
    memset(arr, 0, sizeof(arr));

    int num = (n+1)/2;
    int low = 0;
    int high = n; 
    int temp;
    
    for (int i = 0; i < (n+1)/2; i++){

        temp = low;
        while(temp < high){
            arr[low][temp] = num;
            temp++;
        }

        temp = low+1;
        while(temp < high){
            arr[temp][high-1] = num;
            temp++;
        }

        temp = high-1;
        while(temp-1 >= low){
            arr[high-1][temp-1] = num;
            temp--;
        }

        temp = high-1;
        while(temp-1 > low){
            arr[temp-1][low] = num;
            temp--;
        }

        low++;
        high--;
        num--;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}