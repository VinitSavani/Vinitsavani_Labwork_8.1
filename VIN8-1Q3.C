/* Q3- write a program to perform the addition operation of two 1D arrays & store it in another array.
	 keep in mind that both array size must be same.

*/
#include<stdio.h>
#include<conio.h>

void main(){

int A[99],B[99],C[99];
int i,k,a1,a2;

clrscr();

printf("Enter array A's size :- ");
scanf("%d",&a1);

printf("Enter array A's elements :- \n");

for(i=0;i<a1;i++){
   printf("a[%d]=",i);
   scanf("%d",&A[i]);
   C[i] = A[i];
}
k = i;
printf("Enter array B's size :- ");
scanf("%d",&a2);

printf("Enter array B's elements :- \n");

for(i=0;i<a2;i++){
   printf("a[%d]=",i);
   scanf("%d",&B[i]);
   C[k] = B[i];
   k++;
}

printf("\nArray C is :-\n");
for(i=0;i<k;i++){
    printf("%d ",C[i]);
}

getch();
}