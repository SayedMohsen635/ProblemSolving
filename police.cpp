#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    int recruiters = 0;
    int untreated = 0;
    cin >> n;
    vector<int> numbers(n);

    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }

    for(int i = 0; i < n; i++){
        if(numbers[i] == -1){
            if(recruiters == 0){
                untreated++;
            }else{
                recruiters--;
            }
        }else{
            recruiters += numbers[i];
        }
    }

    cout << untreated << endl;

    return 0;
}