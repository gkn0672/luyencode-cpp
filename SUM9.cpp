#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    double a[11];
    for(int i=0; i<=10; i++){
        a[i] = 0.0;
    }

    a[0] = 1.0;

    for(int i=1; i<=10; i++){
        a[i] = 1.0 / (1.0 +a[i-1]);
    }

    for(int i=0; i<t; i++){
        cin >> n;
        cout << fixed << setprecision(5) << a[n] << endl;
    }
}