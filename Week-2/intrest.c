#include<stdio.h>
#include<math.h>

int main() {
    float p, t, r, si, ci;

    printf("Enter the principal amount: ");
    scanf("%f", &p);

    printf("Enter the rate of interest: ");
    scanf("%f", &r);

    printf("Enter the time in years: ");
    scanf("%f", &t);

    si = (p * t * r) / 100;
    ci = p * pow((1 + r / 100), t) - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}

