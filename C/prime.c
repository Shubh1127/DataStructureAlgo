#include <stdio.h>
#include<math.h>
int checkPrime(int);
void main()
{
    printf("Enter a number");
    int n;
    scanf("%d", &n);
    int answer = checkPrime(n);
    if (answer == 1)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
}
int checkPrime(int n)
{
    if (n == 1)
    {
        return -1;
    }
    else
    {
        for (int i = 2; i <= n - 1; i++){
            if (n % i == 0){
                return -1;
            }
        }
    }
    return 1;
}
