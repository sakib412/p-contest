#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    int a[n], result{0};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && a[i] >= a[k - 1])
            result++;
        else
            break;
    }
    cout << result << endl;
}