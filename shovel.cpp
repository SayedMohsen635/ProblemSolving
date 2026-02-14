#include <iostream>

using namespace std;

int main(){
    int k, r;
    int n = 0;

    cin >> k >> r;

    while(++n){
        if((r == ((n * k) % 10)) || (((n * k) % 10) == 0)){
            break;
        }
    }
    
    cout << n;

    return 0;
}