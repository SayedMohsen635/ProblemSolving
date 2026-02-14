#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    int stone = 0;
    cin >> n;
    vector<char> stones(n);

    for(int i = 0; i < n; i++){
        cin >> stones[i];
    }

    for(int i = 1; i < n; i++){
        if(stones[i-1] == stones[i]){
            stone++;
        }
    }

    cout << stone << endl;

    return 0;
}