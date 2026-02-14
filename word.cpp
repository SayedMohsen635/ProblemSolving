#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    int upper = 0;
    int lower = 0;
    cin >> word;

    for(int i = 0; i < word.length(); i++){
        if(word[i] >= 65 && word[i] <= 90){
            upper++;
        }else{
            lower++;
        }
    }

    if(upper <= lower){
        for(int i = 0; i < word.length(); i++){
            word[i] = tolower(word[i]);
        }
    }else{
        for(int i = 0; i < word.length(); i++){
            word[i] = toupper(word[i]);
        }
    }

    cout << word << endl;

    return 0;
}