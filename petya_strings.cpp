#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string s1, s2;
    int sum1 = 0;
    int sum2 = 0;
    cin >> s1 >> s2;

    // convert uppercase to lowercase
    for(int i = 0; i < s1.length(); i++){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
    // sum ascii codes
    for(int i = 0; i < s2.length(); i++){
        sum1 += s1[i];
        sum2 += s2[i];
        if(sum1 > sum2){
            cout << 1 << endl;
            break;
        }else if(sum1 < sum2){
            cout << -1 << endl;
            break;
        }
    }
    if(sum1 == sum2){
        cout << 0 << endl;
    }
    return 0;
}