// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int bad = 0;
    int left = 1;
    int right = n;
    while(left <= right){
        int mid = left + ((right - left) / 2);
        if(isBadVersion(mid)){
            bad = mid;
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    return bad;
}