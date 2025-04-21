#include<stdio.h>
int main(){
   int a[5],i;
   int fh=0,sh=0;

   printf("Enter the elements : ");

   for(i=0;i<5;i++){
      scanf("%d",&a[i]);
   }

   for(i=0;i<5;i++){
      if(a[i]>fh){
        sh = fh ;
        fh = a[i];
      }
      else{
        if(a[i]<fh && sh<a[i]){
            sh = a[i];
        }
      }
   }
   printf("fh = %d\n",fh);
   printf("sh = %d\n",sh);
}
