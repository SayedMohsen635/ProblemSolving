#include <iostream>
#include <vector>
using namespace std;

int main(){
    int x, y, z, n;
    int result = 0;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> x >> y >> z;
        if((x + y + z) >= 2){
            result++;
        }
    }

    printf("%d", result);
    return 0;
}