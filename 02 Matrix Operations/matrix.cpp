#include <iostream>
using namespace std;

int add(int r, int c, int a[10][10], int b[10][10]){

    int add[r][c];
    cout << "Addition Matrix c: " << endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            add[i][j] = a[i][j] + b[i][j];
            cout << add[i][j] << " ";
        }
        cout<<endl;
    }
}

int sub(int r, int c, int a[10][10], int b[10][10]){

    int sub[r][c];
    cout << "Substraction Matrix c: " << endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sub[i][j] = a[i][j] - b[i][j];
            cout << sub[i][j] << " ";
        }
        cout<<endl;
    }
}

int mul(int r, int c, int a[10][10], int b[10][10]){

    int mul[r][c]={0};
    cout << "Multiplication Matrix c: " << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            mul[i][j] = 0;
            for(int k = 0; k < c; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<r; j++){
            cout << mul[i][j] << " ";
        }
        cout<<endl;
    }
    
}

int main(){
    int r,c;
    cout << "Enter row order of matrix: ";
    cin >> r;
    cout << "Enter column order of matrix: ";
    cin >> c;

    int a[10][10];
    int b[10][10];
    
    cout << "Enter the Elements of Matrix 1: " << endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> a[i][j];
        }
    }

    cout << "Enter the Elements of Matrix 2: " << endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> b[i][j];
        }
    } 

    add(r,c, a,b);
    sub(r,c, a,b);
    mul(r,c, a,b);

    return 0;
}