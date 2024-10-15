#include<stdio.h>
int main(){
     //star
        for(int i=1;i<=5;i++){
            for(int j=1;j<=i;j++){
                printf("*");
                //add j || i in place of * to print number
            }
            printf("\n");
        }
        //INVERTED star
        for(int i=5;i>=1;i--){
            for(int j=1;j<=i;j++){
                printf("*");
                //add j || i in place of * to print number
            }
            printf("\n");
        }
        //character pyramid pattern
        char ch='A';
        for(int i=1;i<=4;i++){
            for(int j=1;j<=i;j++){
                printf("%c",ch);
                ch++;
            }
            printf("\n");
        }
        return 0;
}