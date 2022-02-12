#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int array_length;
        cin >> array_length;
        int a[array_length];
        for (int i = 0; i < array_length; i++)
        {
            cin >> a[i];
            cout << a[i] << endl;
        }
    }
}