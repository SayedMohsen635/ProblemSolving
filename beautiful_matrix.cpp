#include <iostream>

using namespace std;

int main(){
    int arr[5][5];
    int count;
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(arr[i][j] == 1){
                count = abs(2 - i) + abs(2 - j);
                printf("%d", count);
                break;
            }
        }
    }

    return 0;
}