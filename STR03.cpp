#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int t;
    cin >> t;
    char chr;
    for(int i=0; i<t;i++){
        cin >> chr;
        if (chr >= 'A' && chr <= 'Z')
        {
            chr += 32;
        }
        int count = 0;
        for(int j=0; j<s.length(); j++){
            if (s[j] == chr){
                count ++;
            }
        }
        cout << count << endl;
    }
}