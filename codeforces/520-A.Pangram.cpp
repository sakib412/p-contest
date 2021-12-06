#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n{0};
    cin >> n;
    string s{""};
    char a{'a'};
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        // if uppercase, make it lowercase.
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + ('a' - 'A');
        }
    }
    if (n >= 26)
    {
        for (int x = 0; x < 26; x++)
        {
            if (s.find(a) != -1)
                a++;
            else
            {
                cout << "No\n";
                return 0;
            }
        }
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}