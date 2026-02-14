#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    int sereja = 0;
    int dima = 0;
    cin >> n;
    int first = 0;
    int last = n - 1;
    vector<int> cards(n);
    
    for(int i = 0; i < n; i++){
        cin >> cards[i];
    }

    for(int i = 0; i < n; i++){
        if((i % 2) == 0){
            if(cards[first] > cards[last]){
                sereja += cards[first];
                first++;
            }else{
                sereja += cards[last];
                last--;
            }
        }else{
            if(cards[first] > cards[last]){
                dima += cards[first];
                first++;
            }else{
                dima += cards[last];
                last--;
            }
        }
    }
    
    cout << sereja << " " << dima << endl;

    return 0;
}