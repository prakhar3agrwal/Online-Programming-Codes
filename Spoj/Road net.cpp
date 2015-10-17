#include<stdio.h>
main()
{
int n,t,i,j,k;
scanf("%d",&t);
while(t--)
{
       scanf("%d",&n);
       int a[n][n],pred[200][200]={0};
       for(i=0;i<n;i++)
       for(j=0;j<n;j++)
       scanf("%d",&a[i][j]);
       for (k=0;k<n;k++){
        for (j=0;j<n;j++){
            for (i=0;i<n;i++){if(i!=j && j!=k && i!=k){
                         if (a[i][j] == (a[i][k] + a[k][j]))
                            pred[i][j]=1;}
                            
        }
    }
}
                    
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)if(pred[i][j]==0 && i<j)
    printf("%d %d\n",i+1,j+1);
}
}
    
