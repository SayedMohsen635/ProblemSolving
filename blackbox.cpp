#include <iostream>
#include <vector>

using namespace std;

int main(){
    int arr[4];
    int calories = 0;
    string s;

    for(int i = 0; i < 4; i++){
        cin >> arr[i];
    }

    cin >> s;

    for(int i = 0; i < s.length(); i++){
        calories += arr[s[i] - '0' - 1];
    }

    cout << calories << endl;

    return 0;
}