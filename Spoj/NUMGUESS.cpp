#include<iostream>
using namespace std;
char s[5];
int x;
int guess(int a,int b)
{
    x=(a+b)/2;
    printf("%d",(a+b)/2);
    cout<<endl;
    cin>>s;
     if(s[0]=='L')
     guess(((a+b)/2)+1,b);
     else if(s[0]=='H')
     guess(a,((a+b)/2)-1);
     else if(s[0]=='E')
     return 1;
}

int main()
{
    
    int a,b;
    cin>>a>>b;
    guess(a,b);
    return 0;
}



