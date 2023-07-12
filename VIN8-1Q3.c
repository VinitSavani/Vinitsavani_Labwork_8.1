#include<stdio.h>

void main()

{

int i,n;

printf("Enter both array size :");
scanf("%d",&n);

int a[i],b[i],sum[i];

printf("Enter the elements for first array\n");

for(i=0;i<n;i++){
printf("A[%d] = ",i);
scanf("%d",&a[i]);

}

printf("Enter the elements for second array\n");

for(i=0;i<n;i++){
printf("B[%d] = ",i);
scanf("%d",&b[i]);
}

printf("Sum of array\n");

for(i=0;i<n;i++){

sum[i]=a[i]+b[i];

}

for(i=0;i<n;i++){

printf("%d\n",sum[i]);

}

}
