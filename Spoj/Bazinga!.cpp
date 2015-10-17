    #include<iostream>
    #include<vector>
    #include<algorithm>
    #define LEN 5300000
	int prime[5300000];
    using namespace std;
    int main()
    {
    int t,g;
    scanf("%d",&t);
    vector<bool> sieve(LEN,true);
    long int i,j,k,i2;
    for(i=3;i*i<=LEN;i+=2) {
    while( sieve[i]==false )
    i+=2;
    j = i*(i-2);
    i2 = i<<1 ;
    while( ( j = i2+j ) <= LEN )
    sieve[j]=false;
    }
    prime [0] = 2 ;
    for(i=3,j=1,k=1;i<=LEN;i+=2)
    if( sieve[i] )
    prime [k++] = i ;
    vector <long int >x;
    for(i=0;i<k-1;i++)
    {
                    for(j=i+1;j<k;j++)
                    {
                                        i2=prime[i]*prime[j];
                                        
                                      if(i2<=10527449)
                                      x.push_back(i2);
                                      else
                                      break;
                    }
                    if(j==i+1)
                    break;
    }
    sort(x.begin(),x.end());
    while(t--)
    {
              scanf("%d",&g);
              printf("%ld\n",x[g-1]);
    }
}
                    
