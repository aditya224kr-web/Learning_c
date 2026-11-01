#include <stdio.h>
int main(){
int age ;
printf("enter your age: ");
scanf("%d", &age);
if(age >= 18){
printf("you are an adult");
}
else if ( age < 18 && age >=13 ){
printf("you are teenage\n");
}
else{
printf("you are child");
}
return 0;
}