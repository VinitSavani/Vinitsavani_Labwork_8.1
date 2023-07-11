/* Q1- write a program to find the legnth of a 1d array.

*/
#include<stdio.h>
#include<conio.h>

void main(){

int array[99];
int a,v;

clrscr();

printf("Enter array size :- ");
scanf("%d",&v);

printf("Enter array elements :- \n");

for(a=0;a<v;a++){
   printf("a[%d]=",a);
   scanf("%d",&array[a]);
}
printf("Length of an array :- %d",a);
getch();
}