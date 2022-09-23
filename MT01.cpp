#include <iostream>
#include <vector>

using namespace std;

int main(){
    int col, row;
    cin >> row;
    cin >> col;
    
    int m[100][100];

    for(int i=0; i<row; i++){
        for(int j=0; j<col;j++){
            cin >> m[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col;j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    
}