#include <stdio.h>
int main(){
char day ; // m->monday  t->tuesday  w->wednesday  T->thursday f->friday  s->saturday  S->sunday
printf("enter character from m,t,w,T,f,s,S: ");
scanf("%c", &day);
switch(day){
case 'm' : printf("monday\n");
break;
case 't' : printf("tuesday\n");
break;
case 'w' : printf("wednesday\n");
break;
case 'T' : printf("thursday\n");
break;
case 'f' : printf("friday\n");
break;
case 's' : printf("saturday\n");
break;
case 'S' : printf("sunday\n");
break;
default : printf("no valid day \n");
}
return 0;
}
