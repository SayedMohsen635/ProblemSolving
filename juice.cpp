#include <iostream>

using namespace std;

int main(){
    int n, b, d;
    int total = 0, waste = 0;

    cin >> n >> b >> d;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i] <= b){
            total += a[i];
        }
        if(total > d){
            waste++;
            total = 0;
        }
    }

    cout << waste;

    return 0;
}