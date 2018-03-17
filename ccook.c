#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i,j,count;
int *a;
for(i=0;i<n;i++)
{
count=0;
a=(int *)malloc(sizeof(int)*5);
for(j=0;j<5;j++)
{
scanf("%d",&a[j]);
if(a[j]==1) count++;
}
switch(count)
{
case 0: printf("Beginner\n"); break;
case 1: printf("Junior Developer\n"); break;
case 2: printf("Middle Developer\n"); break;
case 3: printf("Developer\n"); break;
case 4: printf("Hacker\n"); break;
case 10/2: printf("Jeff Dean\n"); break;
}
}
}
