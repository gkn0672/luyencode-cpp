#include <iostream>
using namespace std;
int a[1000001];

void sieve()
{
    for(int i=0; i<=1000000; i++)
    {
        a[i] = true;
    }

    a[0] = a[1] = false;

    for(int i=2; i<=1000; i++)
    {
        if(a[i] == true)
        {
            for(int j=i * i; j<=1000000; j+=i)
            {
                a[j] = false;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int n;
    cin >> n;
    sieve();
    for(int i=2; i<=n; i++)
    {
        if(a[i] == true)
        {
            cout << i << " ";
        }
    }
}