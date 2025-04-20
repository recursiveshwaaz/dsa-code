#include<stdio.h>
int main(){
   int a[5],i;
   int max=0 ;

   for(i=0;i<5;i++){
     scanf("%d",&a[i]);
   }
   for(i=0;i<5;i++){
     if(a[i] > max){
        max = a[i];
     }
   }
   printf("Max = %d",max);
}
