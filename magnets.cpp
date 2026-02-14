#include <iostream>
#include <vector>

using namespace std;

int main(){
    int num;
    int counter = 1;
    cin >> num;
    vector<string> magnets(num);

    for(int i = 0; i < num; i++){
        cin >> magnets[i];
        if(i > 0 && magnets[i - 1][1] == magnets[i][0]){
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}