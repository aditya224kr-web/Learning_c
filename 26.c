#include<stdio.h>
int main(){
int a;
printf("enter any number you want to check: ");
scanf("%d", &a);
printf("%d\n", a%2==0 );
printf(" 1 will represent yes it is divisible by 2 and 0 will represent not divisible by 2 ");
return 0;
}