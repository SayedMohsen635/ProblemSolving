#include <iostream>

using namespace std;

int main(){
    string s, t;
    cin >> s;
    cin >> t;

    int position = 0;

    for(int i = 0; i < t.length(); i++){
        if(s[position] == t[i]){
            position++;
        }
    }

    cout << (position + 1);

    return 0;
}