#include <iostream>
using namespace std;


int main() {
    int num;
    cout << "Enter the lenght of arr :";
    cin >> num;
    int arr[num+1];
    int hash[100];

    for (int i = 0; i < num; i++){
        cout << "Enter the number : ";
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++){
        hash[arr[i]]++;
    }

    for (int i = 0; i < num; i++){
        if (hash[arr[i]] >= 0){
            cout << "Number : " << arr[i] << " Occure : " << hash[arr[i]] << endl;
            hash[arr[i]] = -1;
        }
    }
    return 0;
}