int hammingWeight(uint32_t n) {
    unsigned int i , counter = 0;
    for(i = 0; i < 32; i++){
        counter += n & 1;
        n >>= 1;
    }
    return counter;
}