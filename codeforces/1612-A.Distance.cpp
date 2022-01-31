#include <iostream>
// A(0,0), B(x,y), C(a,b)

// c -> positive integer
// d(A,C) = d(A,B)/2
// d(B,C) = d(A,B)/2

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, y, a, b;
        cin >> x >> y;
        // manhattan distance between A to B.
        float disAtoB, disAtoC, disBtoC;
        disAtoB = abs(x) + abs(y);
        if ((int)disAtoB % 2 != 0)
        {
            cout << -1 << " " << -1 << endl;
            return 0;
        }
        // manhattan distance between A to C, d(A,C) = abs(a-0) + abs(b-0) = disAtoB/2;
        // a = disAtoB/2 - b;
        disAtoC = abs(a) + abs(b);
        // manhattan distance between B to C, d(B,C) = abs(a-x) + abs(b-y) = disAtoB/2;

        // So, abs(a-0) + abs(b-0) = abs(a-x) + abs(b-y);
        // disBtoC =
    }
}