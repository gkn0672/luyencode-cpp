#include <iostream>

using namespace std;

int smaller(int a, int b){
    if(a < b){
        return a;
    }
    return b;
}

int bigger(int a, int b){
    if(a > b){
        return a;
    }
    return b;
}

int main(){
    int x1, y1, x2, y2, x3, y3;
    int cd, cr;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if((x3 <= smaller(x1, x2)) || (x3 >= bigger(x1, x2))){
        cout << "NO";
        return 0;
    }

    if((y3 <= smaller(y1, y2)) || (y3 >= bigger(y1, y2))){
        cout << "NO";
        return 0;
    }

    cout << "YES";
    return 0;
}