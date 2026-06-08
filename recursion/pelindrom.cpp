#include <iostream>
using namespace std;

bool swap(int i, string st)
{
    int n = st.size();

    if (i >= st.size() / 2)
    {
        return true;
    }

    if (st[i] != st[n - i - 1]){
        return false;
    }

    return swap(i + 1, st);
}

int main()
{
    string st;
    cout << "Enter string : ";
    cin >> st;

    int n = st.size();

    cout << (swap(0, st) ? "Palindrome" : "Not Palindrome") << endl;
}