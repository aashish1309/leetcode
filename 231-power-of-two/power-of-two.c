bool isPowerOfTwo(int n){
    long int x = n;
    if(n && !(n & (x-1))) return true;
    else return false;
}