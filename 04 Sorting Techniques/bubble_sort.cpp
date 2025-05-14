#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter Size of array: ";
    cin >> n;

    int a[n];
    cout<< "Enter array elements: ";

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int j=0; j<n; j++){
        for(int i=0; i<n; i++){
            if(a[i]> a[i+1]){
                int temp;
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    
    cout << "Sorted List: ";
    for(int i=0; i<n; i++){
        cout << a[i] << "  ";
    }
    
    return 0;
}