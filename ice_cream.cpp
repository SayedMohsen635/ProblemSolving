#include <iostream>

using namespace std;

int main(){
    int lines;
    long long ice, value;
    int sad_kids = 0;
    char sign;

    cin >> lines >> ice;
    for(int i = 0; i < lines; i++){
        cin >> sign >> value;
        if (sign == '+'){
            ice += value;
        }else if (sign == '-'){
            if ((ice - value) < 0){
                sad_kids++;
            }else{
                ice -= value;
            }
        }
    }

    cout << ice << " " << sad_kids << endl;


    return 0;
}