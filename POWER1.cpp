#include <iostream>
using namespace std;

long long power_modulo(long long a, long long n, long long m){
    if(n == 0){
        return 1;
    }

    long long half = power_modulo(a, n/2, m) % m;
    if(n % 2 == 0){
        return (half * half) % m;
    }
    else{
        return (((half * half) % m) * a) % m;
    }
}
int main (){
    long long a, n;
    cin >> a >> n;
    cout << power_modulo(a, n, 1000000007);
}