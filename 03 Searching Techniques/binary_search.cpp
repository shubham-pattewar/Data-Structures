#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int t){
    int beg=0, end=n-1;
    
    while(beg<=end){
        int mid=(beg+end)/2;
        if(t>arr[mid]){
            beg=mid+1;
        } else if (t<arr[mid]){
            end=mid-1;
        } else{
            return mid;
        } 
    }
    return -1;
}

int main(){
    int n, t;
    cout << "Enter size of Array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements: ";
    for(int i=0; i<=n-1; i++){
        cin >> arr[i];
    }

    cout << "Enter Target Element: ";
    cin >> t;

    int b = binary_search(arr, n, t);  
    if(b==-1){
        cout<< "Element Not Found...";
    }else{
        cout<< "Element Found at Index: " << b;
    }
}