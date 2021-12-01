#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string s1{""}, s2{""};

    cin >> s1 >> s2;
    int result1{0}, result2{0};
    for (int i = 0, l = s1.length(); i < l; i++)
    {
        if (isupper(s1[i]))
            s1[i] = tolower(s1[i]);

        if (isupper(s2[i]))
            s2[i] = tolower(s2[i]);
    }
    if (s1 < s2)
        cout << -1;
    else if (s1 > s2)
        cout << 1;
    else
        cout << 0;
    cout << endl;
}