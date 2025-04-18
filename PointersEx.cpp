///example call by value :
#include<stdio.h>
void change(int*);
int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);

    printf("Value of a before fun call = %d\n",a);

    change(&a);

    printf("Value of a after fun call = %d\n",a);

}

void change(int *a){
      *a = *a+5;
      printf("value of a = %d\n",*a);
}
