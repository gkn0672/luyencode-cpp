#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    string n;
    getline(cin, n);
    transform(n.begin(), n.end(), n.begin(), ::tolower);
    cout << n;
}