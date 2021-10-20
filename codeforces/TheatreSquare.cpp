#include <stdio.h>

int main()
{
    long long int n, m, a, total, l, w;
    scanf("%lld %lld %lld", &n, &m, &a);
    if (n % a == 0)
    {
        l = n / a;
    }
    else
    {
        l = (n / a) + 1;
    }
    if (m % a == 0)
    {
        w = m / a;
    }
    else
    {
        w = (m / a) + 1;
    }
    total = l * w;
    printf("%lld\n", total);

    return 0;
}