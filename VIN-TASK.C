#include<stdio.h>
#include<conio.h>

void main(){

int marks[999];
int a,v;

clrscr();

printf("Enter the total student :-");
scanf("%d",&a);

for(v=0;v<a;v++){
    printf("Enter the marks of studant :-");
    scanf("%d",&marks[v]);
}
   for(v=0;v<a;v++){
     if(marks[v]>90){
	printf("Marks :- %d A1\n",marks[v]);
     }else if(marks[v]>80){
	printf("Marks :- %d A\n",marks[v]);
     }else if(marks[v]>70){
	printf("Marks :- %d B1\n",marks[v]);
     }else if(marks[v]>60){
	printf("Marks :- %d B\n",marks[v]);
     }else if(marks[v]>50){
	printf("Marks :- %d C1\n",marks[v]);
     }else if(marks[v]>40){
	printf("Marks :- %d C\n",marks[v]);
     }else if(marks[v]>33){
	printf("Marks :- %d D\n",marks[v]);
     }else{
	printf("Marks :- %d Fail\n",marks[v]);
     }
   }
getch();
}