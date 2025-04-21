#include<stdio.h>
int main(){
	int m[5]={3,5,7,12,10};
	int i,sum=0;
	float avg;
	
    
    for(i=0;i<5;i++){
         	sum = sum +m[i];
		
	}
	avg = sum/5.0;
	printf("%f",avg);
}
