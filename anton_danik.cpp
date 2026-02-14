#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    int danik = 0;
    int anton = 0;
    cin >> n;
    vector<char> s(n);

    for(int i = 0; i < n; i++){
        cin >> s[n];
        if (s[n] == 'D'){
            danik++;
        }else if(s[n] == 'A'){
            anton++;
        }
    }

    if(anton > danik){
        printf("Anton");
    }else if (danik > anton){
        printf("Danik");
    }else{
        printf("Friendship");
    }

    return 0;
}