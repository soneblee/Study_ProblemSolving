#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s;
    getline(cin, s);
    if (s.length() >= 3 && s[0] == '\"' && s[s.length() - 1] == '\"') cout << s.substr(1, s.length() - 2);
    else cout << "CE";
}