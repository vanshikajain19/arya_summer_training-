#include<iostream>
using namespace std;
long long power(int base, int exp)
{
    long long result = 1;

    for(int i = 1; i <= exp; i++)
        result *= base;

    return result;
}

int main()
{
    int base, exp;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    printf("Result = %lld", power(base, exp));

    return 0;
}
