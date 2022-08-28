char * reverseWords(char * s){
    int start = 0 , end = 1;
    while(1){
        if(s[end] == '\0'){
            reverseString(s + start , end - start);
            break;
        }else if(s[end] == ' '){
            reverseString(s + start , end - start);
            start = end + 1;
        }
        ++end;
    }
    return s;
}

void reverseString(char* s, int sSize){
    int temp;
    for(int i = 0 , j = sSize - 1; i < sSize / 2; i++ , j--){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}