#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
string proc(string n)
{
    string result = "";
    string pre = "";
    const string valid = " abcdefghijklmnopqrstuvwxyz";
    transform(n.begin(), n.end(), n.begin(), ::tolower);
    for (auto c: n)
    {
        if (valid.find(c) != string::npos)
        {
            if (pre == " " || result == "")
            {
                c = toupper(c);
            }
            result += c;
            pre = c;
        }
    }
    return result;
}
int main()
{
    int n;
    string s;
    cin >> n;
    cin.ignore();
    for (int i=0; i<=n; i++)
    {
        getline(cin, s);
        cout << proc(s) << endl;
    }
}