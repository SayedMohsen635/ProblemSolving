#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    string name;
    set<char> distinct_chars;

    cin >> name;
    for(char c : name){
        distinct_chars.insert(c);
    }

    if(distinct_chars.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}