void reverseString(char* s, int sSize){
    int temp;
    for(int i = 0 , j = sSize - 1; i < sSize / 2; i++ , j--){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        // if(i == j){
        //     return;
        // }
        // if(sSize % 2 != 0 && j < i){
        //     return;
        // }
    }
}