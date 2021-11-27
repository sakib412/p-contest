#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s{""}, ss{""};
    cin >> s;
    for (int i = 0, l = s.length(); i < l; i += 2)
        ss.push_back(s[i]);

    sort(ss.begin(), ss.end());
    for (int i = 0, l = ss.length(); i < l; i++)
    {
        cout << ss[i];
        if (i == l - 1)
            continue;
        cout << '+';
    }
    cout << endl;
}