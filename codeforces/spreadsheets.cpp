#include <bits/stdc++.h>
using namespace std;

string ss;
void num_to_str(int num)
{
    if (num)
    {
        num_to_str((num - 1) / 26);
        ss += ('A' + (num - 1) % 26);
    }
}
int ans = 0;
void str_to_num(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        ans = ans * 26 + s[i] - 'A' + 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ss = "";
        ans = 0;
        string s;
        cin >> s;
        vector<string> v;
        vector<string> v2;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                string s1;
                while (s[i] >= 'A' && s[i] <= 'Z')
                {
                    s1 += s[i];
                    i++;
                }
                v.push_back(s1);
            }
            else
            {
                string s1;
                while (s[i] >= '0' && s[i] <= '9')
                {
                    s1 += s[i];
                    i++;
                }
                v2.push_back(s1);
            }
            i--;
        }
        if (v.size() > 1 && v2.size() > 1)
        {
            string ans1, ans2;
            ans1 = v2[0];
            ans2 = v2[1];
            //cout<<ans1<<" "<<ans2<<endl;
            int x = stoi(ans2);
            //cout<<x<<endl;
            num_to_str(x);
            cout << ss << ans1 << endl;
        }
        else
        {
            string ans1, ans2;
            ans1 = v[0];
            ans2 = v2[0];
            str_to_num(ans1);
            cout << 'R' << ans2 << 'C' << ans << endl;
        }
    }
}

// #include <iostream>
// #include <vector>

// using namespace std;
// string ss;
// string num_to_26base(int numb)
// {

//     if (numb)
//     {
//         num_to_26base((numb - 1) / 26);
//         ss += ('A' + (numb - 1) % 26);
//     }

//     return ss;
// }
// int ans{0};
// int str_to_num(string s)
// {
//     for (int i = 0; i < s.size(); i++)
//     {
//         ans = ans * 26 + s[i] - 'A' + 1;
//     }
//     return ans;
// }

// int main()
// {
//     string ss;
//     int ans{0};
//     int n{0};
//     cin >> n;
//     while (n--)
//     {
//         vector<string> v1, v2;
//         string s{""};

//         cin >> s;
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s[i] >= 'A' && s[i] <= 'Z')
//             {
//                 string string1{""};
//                 while (s[i] >= 'A' && s[i] <= 'Z')
//                 {
//                     string1 += s[i];
//                     i++;
//                 }
//                 v1.push_back(string1);
//             }
//             else
//             {
//                 string string2{""};
//                 while (s[i] >= '0' && s[i] <= '9')
//                 {
//                     string2 += s[i];
//                     i++;
//                 }
//                 v2.push_back(string2);
//             }
//             i--;
//         }
//         if (v1.size() > 1 && v2.size() > 1)
//         {
//             cout << num_to_26base(stoi(v2[1])) << v2[0] << endl;
//         }
//         else
//         {
//             cout << "R" << v2[0] << "C" << str_to_num(v1[0]) << endl;
//         }
//     }
//     return 0;
// }
