#include<iostream>
using namespace std;
struct node
{
       int data;
       node *link;
}*top;
void add(int num)
{
     node *temp;
     temp=new node;
     temp->data=num;
     temp->link=NULL;
     if(top==NULL)
     {
                  top=temp;
                  return ;
     }
     else
     {
                  temp->link=top;
                  top=temp;
     }
}
void display()
{
     node *t;
     t=top;
     while(t!=NULL)
     {
                   cout<<t->data;
                   t=t->link;
     }
}
int main()
{
long long int n,i,j,r;
cin>>n;
if(n==0)
cout<<"0\n";
else
{
    r=0;
   while(n!=1)
   {
              if(n<0)
              {
                     for(i=1;;i++)
                     {
                                  if(2*i>=(-1)*n)
                                  break;
                     }
                     r=n-(-2)*i;
                     n=i;
              }
              else if(n>0)
              {
                       for(i=1;;i++)
                     {
                                  if(2*i>=n)
                                  break;
                     }
                     if(2*i!=n)
                     i--;
                     r=n-2*i;
                     n=(-1)*i;
              }
              add(r);
              
   }
}
if(n==1)
add(1);
display();
return 0;
}
