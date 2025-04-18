#include<stdio.h>

int fibbo(int n){
   int ans ;
   if(n<=1)
    return n;
   else
   return fibbo(n-1)+fibbo(n-2);
}

int main(){
   int n,v;
   printf("Enter the number : ");
   scanf("%d",&n);

   v = fibbo(n);

   printf("%d",v);


}
