#include <stdio.h>

int input(int a[], int n){
    printf("Enter the %d Elements of array: \n", n);
    for(int i=0; i<n; i++){
        printf("Index %d: ",i);
        scanf("%d", &a[i]);
    }
    return 0;
}

int output(int a[], int n){
    printf("Displaying Array: ");
    for(int i=0; i<n; i++){
        printf("%d  ",a[i]);
    }
    return 0;
}

int max(int a[], int n){
    int max=a[0];
    for(int i=1; i<n; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    printf("\nMaximum Element: %d", max);
    return 0;
}

int min(int a[], int n){
    int min= a[0];
    for(int i=1; i<n; i++){
        if(min > a[i]){
        min = a[i]; 
        }
    }
    printf("\nMinimum Element: %d", min);
    return 0;
}

int sum(int a[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum =sum + a[i];
    }
    printf("\nSum of Elements: %d", sum);
    return 0;
}

int even(int a[], int n){
    printf("\nEven Numbers: ");
    for(int i=0; i<n; i++){
        if(a[i] % 2 == 0){
            printf("%d  ", a[i]);
        }
    }
    return 0;
}

int odd(int a[], int n){
    printf("\nOdd Numbers: ");
    for(int i=0; i<n; i++){
        if(a[i] % 2 == 1){
            printf("%d  ", a[i]);
        }
    }
    return 0;
}

int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];
    
    input(a,n);

    output(a,n);

    max(a,n);

    min(a,n);

    sum(a,n);
    
    even(a,n);

    odd(a, n);

    return 0;
}