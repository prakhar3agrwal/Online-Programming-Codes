#include<iostream>
#include<vector>
#include<algorithm>
#define PRIME 1000000007
typedef long long LL;
using namespace std;
 
LL B[2][2],R[2][2];
 
void matrix_mult(LL a[][2],LL b[][2],LL res[][2]){
    LL i,j,k;
    LL tmp[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            tmp[i][j]=0;
            for(k=0;k<2;k++){
                tmp[i][j]=(tmp[i][j]+(a[i][k]*b[k][j]));
            }
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            res[i][j] = tmp[i][j];
        }
    }
}
 
void raise(LL n){
    LL i,j,e;
    e=n;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
            R[i][j] = 0;
        R[i][i] = 1;//Make R an identity matrix
    }
    while(e){
        if(e&1){
            matrix_mult(R,B,R);//R=R*B
        }
        e = e>>1;
        matrix_mult(B,B,B);//B=B*B
    }
}
 
LL Fib(LL n){
	B[0][0]=B[0][1]=B[1][0]=1;
	B[1][1]=0;
	raise(n);
	return R[1][0];
}
 
int main(){
	int t,low,high,mid,n,a1,a2,i,x,j,y[100002],y1;
	vector<int>fib;
	fib.push_back(0);
	fib.push_back(1);
	fib.push_back(2);
	i=4;
	x=3;
	while(x<=10000000)
	{
              fib.push_back(x);
              i++;
              x=Fib(i);
   }        
     fib.push_back(x);       
	while(1){
		scanf("%d",&n);
		if(n==0)
		break;
		high=34;
		for(i=0;i<n;i++)
		{
                        scanf("%d",&x);
                        j=x;
                        low=0;
                        high=fib.size()-1;
                        mid=(low+high)/2;
		                               while(low<=high)
                                       {
                                        if(fib[mid]==x)
                                        break;
                                        else if(fib[mid]>x)
                                        high=mid-1;
                                        else if(fib[mid]<x)
                                        low=mid+1;
                                        mid=(low+high)/2;
                                        }
                                        if(fib[mid]==x)
                                        y[i]=(x);
                                        else
                                        {
                                            if(fib[mid]>x)
                                            {
                                                          while(fib[mid]>x )
                                                          {
                                                             x=fib[mid];
                                                             mid--;
                                                          }
                                                          mid++;
                                            }
                                            else
                                            {             
                                                          while(fib[mid]<x)
                                                          {
                                                             x=fib[mid];
                                                             mid++;
                                                          }
                                            }
                                            a1=fib[mid]-j;
                                            a2=j-fib[mid-1];
                                            if(a1==a2)
                                                      y[i]=(fib[mid]);
                                            else if(a1>a2)
                                                  y[i]=(fib[mid-1]);
                                            else 
                                             y[i]=(fib[mid]);
                                            }
	}
	sort(y,y+n);
	printf("%d",y[0]);
	for(i=1;i<n;i++)
	printf(" %d",y[i]);
	printf("\n");
 }
}
