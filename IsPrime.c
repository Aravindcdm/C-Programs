// Online C compiler to run C program online
#include <stdio.h>
int prime(int n){
    int flag=1;
    if(n==0 || n==1)
    return 1;
    else
    {
       for(int i=2;i<n;i++){
           if(n%i==0)
           flag = 0;
       } 
    }
    return flag;
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