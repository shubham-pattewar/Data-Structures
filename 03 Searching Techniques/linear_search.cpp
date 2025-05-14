#include <iostream>
using namespace std;

int main(){
    int e;
    cout << "Enter the no. of Elements in an Array: ";
    cin >> e;

    int a[e];
    int n,i;

    cout << "Provide the "<< e << " elements in the array: " << endl;
    for(int i=0; i<e; i++){
        cout << "Index " << i << ": ";
        cin >> a[i];
    }

    cout << "Enter the element you want to search: ";
    cin>> n;

    for(i=0; i<e; i++){
        if(a[i]==n){
            break;
        }
    }
    if (i<e){
        cout<< "Record Found at index " << i;
    }else{
        cout << "Record Not Found";
    }

    return 0;
}