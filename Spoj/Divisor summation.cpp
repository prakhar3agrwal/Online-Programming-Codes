#include<stdio.h>
#include<math.h>
main()
{
int s=1,n,num,j;
double x;
scanf("%d",&n);
while(n--)
{
                scanf("%d",&num);
                if(num==1)
                printf("0\n");
                else{
                s=1;
                x=((sqrt(num)));                
                            j=2;
                            while(j<=x)
                            {
                                     if(num%j==0)
                                     s+=j+(num/j);
                                     j++;
                            }
                             if((j-1)*(j-1)==num)
                             s-=(j-1);
                             printf("%d\n",s);
                }
}
return 0;
}
