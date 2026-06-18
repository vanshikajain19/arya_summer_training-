#include <stdio.h>

int main() {
    int p, r, t;
    float SI;

    printf("Enter Principal Amount: ");
    scanf("%d", &p);

    printf("Enter Rate of Interest: ");
    scanf("%d", &r);

    printf("Enter Time (in years): ");
    scanf("%d", &t);

    simpleInterest = (p * r * t) / 100;

    printf("Simple Interest = %f", SI);

    return 0;
}