int BintoDec(int n){
    int power=0,dec=0,lastDigit;
    while(n>0){
        lastDigit=n%10;
        dec=lastDigit+(lastDigit*(int)pow(2,power));
        power++;
        n/=10;
    }
    return dec;
}