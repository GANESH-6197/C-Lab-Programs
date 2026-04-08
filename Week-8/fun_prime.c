#include<stdio.h>

int prime(int n)
{
    int i;

    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(prime(num))
        printf("The number is Prime");
    else
        printf("The number is Not Prime");
        printf("\n\n           -25331A05D2");

    return 0;
}
