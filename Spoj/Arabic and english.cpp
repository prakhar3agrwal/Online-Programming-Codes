#include<stdio.h>
main()
{
int i,j,n,num,k,m,l,x;
scanf("%d",&n);
while(n--)
{
          scanf("%d",&x);
          char A[x][20];
          i=0;j=-1;
          while(i<x)
          {
                    scanf("%s",&A[i]);
                    if(A[i][0]>=97 && A[i][0]<=122)
                    j=i;
                    i++;
          }if(j!=-1){
          for(i=j+1;i<x;i++)
          printf("%s ",A[i]);
          printf("%s ",A[j]);
          for(i=0;i<j;i++)
          printf("%s ",A[i]);}
          else
          for(i=0;i<x;i++)
          printf("%s ",A[i]);
          printf("\n");
}
}
