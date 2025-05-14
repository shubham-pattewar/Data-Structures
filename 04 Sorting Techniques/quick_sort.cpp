#include<iostream>
using namespace std;

int partition(int a[], int lb, int ub){
    int pivot=a[lb];
    int start = lb;
    int end = ub;

    while(start < end){
        while(start <= ub && a[start] <= pivot){
            start++;
        }
        while(end >= lb && a[end] > pivot){
            end--;
        }
        if(start<end){
            swap(a[start], a[end]);
        }
    }
    swap(a[lb], a[end]);
    return end;
}

void quick_sort(int a[], int lb, int ub){
    if(lb<ub){
        int loc= partition(a,lb,ub);
        quick_sort(a, lb, loc-1);
        quick_sort(a, loc+1, ub);
    }
}

int main(){ 
    int n;
    cout << "Enter size of array: ";
    cin>> n;

    int a[n];
    cout << "Enter Array: ";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    quick_sort(a,0,n-1);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}