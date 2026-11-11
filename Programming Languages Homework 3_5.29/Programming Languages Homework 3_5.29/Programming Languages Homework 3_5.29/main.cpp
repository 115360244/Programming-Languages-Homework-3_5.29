#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <numeric>
using namespace std;

int lcm(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;

    return abs(a / gcd(a, b) * b);
}

int main()
{
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "The least common multiple is "
        << lcm(num1, num2) << endl;
	system("pause");
    return 0;
}