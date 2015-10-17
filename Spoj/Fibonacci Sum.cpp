#include<stdio.h>
#define PRIME 1000000007
typedef long long int LL;
 
LL B[2][2],R[2][2];
 
void matrix_mult(LL a[][2],LL b[][2],LL res[][2]){
    LL i,j,k;
    LL tmp[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            tmp[i][j]=0;
            for(k=0;k<2;k++){
                tmp[i][j]=(tmp[i][j]+(a[i][k]*b[k][j])%PRIME)%PRIME;
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
	return R[1][0]%PRIME;
}
 
int main(){
	int t;
	LL ans,n,m;
	scanf("%d",&t);
	while(t--)
	{
              scanf("%lld%lld",&n,&m);
              ans=(Fib(m+2)-Fib(n+1)+PRIME)%PRIME;
              printf("%lld\n",ans);
   }
}
