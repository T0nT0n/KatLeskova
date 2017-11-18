#include <iostream>

using namespace std;
void faktorial(int numb)
{
    int rezult = 1;
    for (int i = 1; i <= numb; i++)
        rezult *= i;
    cout << numb << "! = " << rezult << endl;
}
int fibo(int n)
{
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibo(n - 1) + fibo(n - 2);
    }
}
int main()
{
    int a = 0, b = 0, c = 1, d = 1;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << endl;

    for (int i = 0; i < b; i++)
        c = c * a;

    for (int i = 0; i < a; i++)
        d = d * b;

    cout << "a + b = " << a+b << endl;
    cout << "a - b = " << a-b << endl;
    cout << "a / b = " << a/b << endl;
    cout << "a * b = " << a*b << endl;
    cout << "a ^ b = " << c << endl;
    cout << "b ^ a = " << d << endl;
    cout << "a! = ";
    faktorial(a);
    cout << "b! = ";
    faktorial(b);
    cout << "Fibonacci number [" << a << "] = " << fibo(a) << endl;
    cout << "Fibonacci number [" << b << "] = " << fibo(b) << endl;
    return 0;
}
