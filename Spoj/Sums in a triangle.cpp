#include<iostream>
main(){
       int a[100][100],j,k,n,r;scanf("%d",&n);while(n--){scanf("%d",&r);for(j=0;j<r;j++)for(k=0;k<=j;k++)scanf("%d",&a[j][k]);for(j=r-1;j>0;j--)for(k=0;k<j;k++)a[j-1][k]+=a[j][k+(a[j][k]<a[j][k+1])];printf("%d\n",a[0][0]);}}                                
