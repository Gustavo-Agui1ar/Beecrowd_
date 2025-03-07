#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)

int rows, column;
char** matrix;

bool is_water(int x, int y){
    if(x >= 0 && y >= 0 && y <= rows - 1 && x <= column - 1) {
        if(matrix[y][x] == '.') {
            return true;
        }
    }
    return false;
}

int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> rows >> column;
    
    rows += 2;
    column += 2;

    matrix = (char**)malloc(sizeof(char*) * (rows));
    for(int i = 0; i < rows; i++) 
        matrix[i] = (char *)malloc((column) * sizeof(char));

    rep(i,0, column) {
        matrix[0][i] = '.';
        matrix[rows - 1][i] = '.';
    }

    rep(i, 0, rows) {
        matrix[i][0] = '.';
        matrix[i][column - 1] = '.';
    }

    rep(i,1,rows - 1) {
        rep(j,1,column - 1) {
            char aux;
            cin >> aux;
            matrix[i][j] = aux;
        }
    }

    int resp = 0;

    rep(i,0,rows) {
        rep(j,0,column) {
            if(matrix[i][j] != '.') {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
                if(is_water(j,i + 1) || is_water(j, i - 1)) {
                    resp++;
                }
                else if(is_water(j + 1,i) || is_water(j - 1, i)) {
                    resp++;

                }
            }
        }
    }
    printf("%d\n", resp);
    return 0;
};