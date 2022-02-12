#include <iostream>

using namespace std;

long long binpow(int a, int n)
{
    if (n == 0)
        return 1;

    long long result = binpow(a, n / 2);

    if (n % 2)
        return result * result * a;
    else
        return result * result;
}

int main(void)
{
    int a, n;
    cin >> a >> n;
    long long res = binpow(a, n);
    cout << res << endl;
}