#include <iostream>

using namespace std;

int main(){
    int a, b;
    int years = 0;
    cin >> a >> b;

    while(b >= a){
        a *= 3;
        b *= 2;
        years++;
    }
    printf("%d", years);
    return 0;
}