// 1. WAP to check whether the entered number is prime or not using POP and OOP way.

#include <stdio.h>

int main() {
    int count=0, n, i;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++) {
        if(n%i==0)
            count++;
    }
    if(count == 2 || count==1)
        printf("%d is prime.", n);
    else
        printf("%d is not prime.", n);
    return 0;
}
