#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s, result;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if(s[i] != '+'){
            result.push_back(s[i]);
        }
    }
    
    sort(result.begin(), result.end());

    cout << result[0];
    for(int i = 1; i < result.size(); i++){
        cout << "+" << result[i];
    }

    return 0;
}