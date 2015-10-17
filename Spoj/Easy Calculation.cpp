#include<stdio.h>
#include<math.h>
main()
{
int t,i;
float a,b,c;
double arr[100];
scanf("%d",&t);
while(t--){
           scanf("%f%f%f",&a,&b,&c);
arr[0]=c/a;
for(i=1;i<10;i++)
{
                 arr[i]=arr[i-1]-(((a*arr[i-1])+(b*(sin((arr[i-1]))))-c)/(a+(b*(cos((arr[i-1]))))));
                 
}
printf("%0.6lf\n",arr[i-1]);
}
return 0;
}
