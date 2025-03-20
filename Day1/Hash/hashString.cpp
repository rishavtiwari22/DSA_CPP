#include <iostream> 
#include <string>
using namespace std;

int main() {
    string st;
    cout << "Enter the small leter string : ";
    cin >> st;
    int hash[256] = {0};

    for (int i = 0; i < st.length(); i++){
        hash[st[i] - 'a']++;
    }

    cout << st << endl;


    return 0;
}