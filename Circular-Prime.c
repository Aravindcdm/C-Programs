#include <stdio.h>
#include <math.h>
int prime(int n){
    if(n==1 || n==0){
        return 0;
    }
    int flag = 1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
        flag = 0;
    }
    return flag;
}
int fun(int n){
     if(!prime(n)){
       printf("False");
       return 0;
   }
   else{
       int y = log10(n)+1;
       int temp = 0;
       while(y--){
           int len = log10(n)+1;
           int rem = n%10;
           int x = n/10;
           int ans = rem*pow(10,len-1) + x;
           if(!prime(ans)){
               printf("False");
               return 0;
           }
           n = ans;
       }
   }
   return 1;
}

int main() {
   int n;
   scanf("%d",&n);
   if(n<0)
   {
       printf("False");
       return 0;
   }
   if(fun(n))
   printf("True");
   return 0;
}
