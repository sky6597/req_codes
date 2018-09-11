#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,c,i,n;
b=0;
c=1;
printf("enter the value \n");
scanf("%d",&a);
int *d;
d=(int*)malloc(sizeof(a));
*(d+0)=0;
*(d+1)=1;
i=2;
while(i<a)
{
*(d+i)=b+c;b=c;c=*(d+i);
i++;
}
for(i=0;i<a;i++)
printf("%d\n",*(d+i));
}
