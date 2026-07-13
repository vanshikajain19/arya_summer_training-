#include <iostream>
using namespace std;

int isPrime(int num)
{
    if(num <= 1)
        return 0;

    for(int i = 2; i * i <= num; i++)
    {
        if(num % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(isPrime(num))
        cout << "Prime Number";
    else
        cout << "Not a Prime Number";

    return 0;
}
