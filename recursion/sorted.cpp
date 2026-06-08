#include <iostream>
using namespace std;
#include <vector>

bool sorted(int i ,const vector<int>& vec, int n)
{
    if (i == n){
        return true;
    }

    if (vec[i] < vec[i-1]){
        return false;
    }

    return sorted(i+1, vec, n);
}

int main()
{
    int n;
    cout << "Enter number of testcase : ";
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < n; i++){
        cout << "Enter value : ";
        cin >> vec[i];
    }

    cout << sorted(1, vec, n) << endl;
}
