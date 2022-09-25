#include <set>
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

bool check(int n){
    int result = sqrt(n);
    if(result * result == n){
        return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int row, col;
    int m[100][100];
    vector<int> result;
    cin >> row >> col;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> m[i][j];
            if(check(m[i][j])){
                result.push_back(m[i][j]);
            }
        }
    }
    if(result.size() == 0){
        cout << "NOT FOUND";
    }
    else{
        set<int> aset;
        for(auto v: result){
            aset.insert(v);
        }

        for(auto s: aset){
            cout << s << " ";
        }
    }
}

