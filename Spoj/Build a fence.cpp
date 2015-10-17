#include<stdio.h>
int main()
{
int n;
float area;
while(1)
{
        scanf("%d",&n);
        if(n==0)
        break;
        area=(n*n)/3.14159265358;
        printf("%.2f\n",area/2);
}
return 0;
}
