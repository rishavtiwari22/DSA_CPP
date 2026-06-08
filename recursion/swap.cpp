#include<iostream>
using namespace std;



string swap(int i ,string st){
    int n = st.size();

    if (i > st.size()/2){
        return st;
    }

    char temp = st[i];
    st[i] = st[n - i - 1];
    st[n - i - 1] = temp;

    return swap(i + 1, st);
}

int main(){
    string st;
    cout << "Enter string : ";
    cin >> st;

    int n = st.size();

    cout << swap(0, st) << endl;
}