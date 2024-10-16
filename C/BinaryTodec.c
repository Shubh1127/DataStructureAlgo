#include<stdio.h>
#include<Math.h>
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
int DectoBin(int n){
    int power=1,rem,BinaryNum=0;
    while(n>0){
        rem=n%2;
        BinaryNum=BinaryNum+(rem*power);
        power*=10;
        n/=2;
    }
    return BinaryNum;
}
int main(){
    printf("\nEnter the binary number");
    int BinNum;
    scanf("%d",&BinNum);
    printf("Decimal equivalent of %d is %d\n", BinNum, BintoDec(BinNum));

    //decimal to binary
    printf("\nEnter the Decimal number");
    int Decnum;
    scanf("%d",&Decnum);
    printf("Binary equivalent of %d is %d\n", Decnum, DectoBin(Decnum));

}