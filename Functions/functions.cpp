#include <iostream>
#include "functions.h"
using namespace std;

void maxOfThreeNumbers(int a, int b, int c)
{
    if (a > b && a > c)
    {
        cout << a;
    }
    else if (b > a && b > c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }
    cout << " is the biggest number";
}

void countingUptoN(int num)
{
    for (int i = 1; i <= num; i++)
    {
        cout << i << endl;
    }
}

void checkPrime(int num)
{
    if (num <= 1)
    {
        cout << num << " is not a prime number";
    }
    if (num == 2)
    {
        cout << num << " is a prime number";
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << num << " is not a prime number";
            break;
        }
        else if (i == num - 1 || num == 2)
        {
            cout << num << " is a prime number";
        }
    }
}

void checkOddEven(int num)
{
    if (/* num % 2 == 0 */ (num & 1) == 0)
    {
        cout << num << " is an even number";
    }
    else
    {
        cout << num << " is an odd number";
    }
}

void sumUptoN(int num)
{
    int ans = 0;
    for (int i = 1; i <= num; i++)
    {
        ans = ans + i;
    }
    cout << "Sum of numbers from 1 to " << num << " is " << ans;
}

void sumUptoNOfEvenNo(int num)
{
    int ans = 0;
    for (int i = 0; i <= num; i = i + 2)
    {
        ans += i;
    }
    cout << ans;
}

void areaOfCircle(float rad)
{
    cout << "Area of circle with radius " << rad << " is "
         << (float)22 / 7 * rad * rad;
}

void factorialOfANum(int num)
{
    int ans = 1;
    for (int i = 1; i <= num; i++)
    {
        ans = ans * i;
    }
    cout << "Factorial of " << num << " is " << ans;
}

void printAllPrime(int num)
{
    cout << 2 << " ";
    for (int j = 2; j <= num; j++)
    {
        for (int i = 2; i < num; i++)
        {
            if (j % i == 0)
            {
                break;
            }
            else if (i == j - 1)
            {
                cout << j << " ";
            }
        }
    }
}

void printAllDigits(int num)
{
    while (num)
    {
        int rem = num % 10;
        cout << rem << endl;
        num /= 10;
    }
}

void reverseAnInteger(int num)
{
    bool isNeg = false;
    if (num < 0)
    {
        num = -num;
        isNeg = true;
    }
    int ans = 0;
    int rem;
    while (num > 0)
    {
        rem = num % 10;
        ans = ans * 10 + rem;
        num /= 10;
    }
    cout << (isNeg ? -ans : ans);
}

void createNoUsingDigits(int num) { cout << to_string(num); }

void printBinary(int num)
{
    cout << "Given number is: " << num << endl;
    int rem;
    int que;
    int count = 0;
    while (num > 0)
    {
        rem = num % 2;
        que = num / 2;
        num = que;
        if (rem == 1)
        {
            count++;
        }
        cout << rem;
    }
    cout << "No. of set bits in the no. is: " << count;
}

void convertKMtoMiles(float num)
{
    cout << num << " km is equal to " << num * 0.621371 << " miles.";
}

void calculateSetBit(int num)
{
    int count = 0;
    int temp = num;
    while (temp)
    {
        temp = temp & (temp - 1);
        count++;
    }
    cout << "No. of setbits in " << num << " are: " << count;
}

void printFunctions()
{
    cout << "Hi there! I am from functions.cpp" << endl;
    int num;
    // cin >> a >> b >> c;
    // cin >> num;
    // maxOfThreeNumbers(a, b, c);
    // countingUptoN(num);

    // checkPrime(num);

    // checkOddEven(num);

    // sumUptoN(num);

    // sumUptoNOfEvenNo(num);

    // areaOfCircle(num);

    // factorialOfANum(num);

    // printAllPrime(num);

    // printAllDigits(num);

    // reverseAnInteger(num);

    // createNoUsingDigits(num);

    // printBinary(num);

    //   calculateSetBit(num);

    // convertKMtoMiles(num);
}