#include <iostream>
using namespace std;

void MergeSort(int a[], int lb, int ub){
    if(lb < ub){
        int mid = (lb+ub)/2;
        mergeSort(a, lb, ub);
        

    }
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin>> n;

    int a[n];
    cout << "Enter "<< n << "Elements: ";
    for(int i=1; i<n ; i++){
        cin >> a[i];
    }

    MergeSort(a, 0, n-1)




}