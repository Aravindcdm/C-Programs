// Online C compiler to run C program online
#include <stdio.h>
int prime(int n){
    if(n<2)
    return 0;
    else
    {
       for(int i=2;i<n;i++){
           if(n%i==0)
           return 0;
       } 
    }
    return 1;
}
int main() {
    int num;
    scanf("%d",&num);
    if(prime(num))
        printf("True");
    else
        printf("False");
    return 0;
}
