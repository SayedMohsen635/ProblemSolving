#include <iostream>
#include <cmath>

using namespace std;

int main(){
    unsigned int bulbs;

    while(cin >> bulbs && bulbs != 0){
        unsigned int root = sqrt(bulbs);
        if(bulbs == root * root){
            cout << "yes\n";
        }else{
            cout << "no\n";
        }
    }

    return 0;
}