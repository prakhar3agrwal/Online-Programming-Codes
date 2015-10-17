#include<stdio.h>
main()
{
double a[100000];
int i;
a[1]=0.0;
for(i=2;i<=10000;i++)
a[i]=a[i-1]+1.0/(double)i;
while(1)
{
   scanf("%d",&i);
   printf("With %d competitors, a Jedi Knight will be replaced approximately %.2f times.\n\n",i,a[i]);
}
return 0;
}
