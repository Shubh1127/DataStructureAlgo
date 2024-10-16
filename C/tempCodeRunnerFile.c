#include<stdio.h>
#include<Math.h>
int BintoDec(int n){
    int pow=0,dec=0,lastDigit;
    while(n>0){
        lastDigit=n%10;
        dec=dec+(lastDigit*(int)pow(2,pow));
        pow++;
        n/=10;
    }
    return dec;
}
int main(){
    printf("Enter the binary number");
    int BinNum=scanf("%d",&BinNum);
    printf("%d",BintoDec(BinNum));

}