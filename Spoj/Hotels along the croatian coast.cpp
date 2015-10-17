#include<stdio.h>
main()
{
int n,i,j,k,m=0,s=0,max=0;
scanf("%d%d",&n,&m);
long int a[300000],x=0;
for(i=0;i<n;i++)
scanf("%ld",&a[i]);k=0;
for(i=0;i<n;i++)
{
                for(j=k;j<n;j++)
                {
                                if(s+a[j]<m)
                                {
                                            
                                            s+=a[j];
                                            if(j==n-1)
                                            {
                                                      max=max>s?max:s;
                                                      x=n-1;
                                                      break;
                                            }
                                }
                                else if(s+a[j]==m || a[j]==m)
                                {
                                     max=m;
                                     break;
                                }
                                else if(a[j]>m)
                                {
                                     max=max>s?max:s;
                                     x=j+1;
                                     k=j+1;
                                     break;
                                }
                                else if(s+a[j]>m)
                                {
                                     max=max>s?max:s;
                                     s-=a[x];
                                     x++;
                                     k=j;
                                     break;
                                }
                }
                if(x==n || max==m)
                break;
}
printf("%d\n",max);
return 0;
}
