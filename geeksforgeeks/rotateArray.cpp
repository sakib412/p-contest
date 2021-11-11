#include <iostream>
using namespace std;

int main()
{
    int T{0};
    cin >> T;
    while (T--)
    {
        int N, D;
        cin >> N >> D;
        int arr[N];
        for (int i = 1; i <= N; i++)
        {

            cin >> arr[(i + (N - D - 1)) % N];
        }
        for (int i = 0; i < N; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}