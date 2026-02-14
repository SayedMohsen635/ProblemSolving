#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main(){
    string name;
    int result = 0;
    cin >> name;

    char letter = 'a';

    for(int i = 0; i < name.length(); i++){
        result += min(abs(letter - name[i]), 26 - abs(letter - name[i]));
        letter = name[i];
    }

    printf("%d", result);

    return 0;
}