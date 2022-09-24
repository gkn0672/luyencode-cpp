#include <iostream>

using namespace std;

int main(){
    int total, size = 0;
    cin >> size;
    int a[100][100];
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cin >> a[i][j];
            if(i == j){
                total += a[i][j];
            }
        }
    }

    cout << total;
}