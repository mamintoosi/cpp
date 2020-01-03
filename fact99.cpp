#include <iostream>
using namespace std;
// 10!=3628800   99!=9.3326e155

int main()
{
    int f[160] = {0}, i, j, c = 0, n = 99;
    f[0] = 1;
    for (i = 1; i <= n; i++)
        for (j = 0; j < 160 - 1; j++)
        {
            f[j] = i * f[j] + c;
            c = f[j] / 10;
            f[j] %= 10;
        }
    for (j = 160 - 1; j >= 0; j--)
        cout << f[j];
}