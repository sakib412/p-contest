#include <iostream>

using namespace std;

int main()
{
    string word{""};
    cin >> word;
    word[0] = toupper(word[0]);

    cout << word << endl;
}