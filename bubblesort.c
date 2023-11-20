#include<stdio.h>
#include<conio.h>
void bubble(int a[],int n);
void main()
{
int a[50],n,i;
clrscr();
printf("Pranay Gaikwad\n");
printf("enter size of array \n");
scanf("%d",&n);
printf("enter array element \n");
for(i=0;i<=n;i++)
scanf("%d",&a[i]);
bubble(a,n);
getch();
}
void bubble(int a[],int n)
{
int i,j,temp;
for(i=1;i<n;i++)
{
 for(j=0;j<n-i;j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
}
printf("sorted elements are \n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
