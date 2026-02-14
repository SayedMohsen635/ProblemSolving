#include <iostream>
#include <set>

using namespace std;

int main(){
    string s;
    set<char> distinctChars;
    int result;
    
    getline(cin, s);
    
    for(char c : s){
        if(c != '{' && c != '}' && c != ' ' && c != ','){
            distinctChars.insert(c);
        }
    }
    result = distinctChars.size();

    cout << result;

    return 0;
}
