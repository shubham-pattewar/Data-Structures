#include <stdio.h>

int main(){
    int a, b, n;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("1.Add \n2.Subtract \n3.Multiply \n4.Divide \n5.Modulus \n6.Exit\n");

    do{
        printf("What would you like to Perform: ");
        scanf("%d", &n);

        switch(n){
        case 1: printf("%d + %d = %d\n", a, b, a+b);
                break;
        case 2: printf("%d - %d = %d\n", a, b, a-b);
                break;
        case 3: printf("%d * %d = %d\n", a, b, a*b);
                break;
        case 4: printf("%d / %d = %d\n", a, b, a/b);
                break;
        case 5: printf("%d mod %d = %d\n", a, b, a%b);
                break;
        case 6: printf("Exiting....");
                break;
        default: printf("Invalid Input!!!\n");
        }
    } while (n!=6);

    return 0;
}