#include<stdio.h>
#include<string.h>
main()
{
char a[400000];
unsigned long long int x,y,m,g,r,z,i,u,l1,l2;
while(scanf("%s",&a)!=EOF)
{
        if(strcmp(a,"BYE")==0)
        break;
        x=0;y=0;z=0;
        i=0;l1=l2=0;
        while(a[i]!='+')
        {
                 z=(a[i]-48)*100+(a[i+1]-48)*10+(a[i+2]-48);
                 if(z==63)
                 m=0;
                 else if(z==10)
                 m=1;
                 else if(z==93)
                 m=2;else if(z==79)
                 m=3;else if(z==106)
                 m=4;else if(z==103)
                 m=5;else if(z==119)
                 m=6;else if(z==11)
                 m=7;else if(z==127)
                 m=8;else if(z==107)
                 m=9;
                 x=x*10+m;
                 i+=3;
                 l1++;
        }
        i++;
        while(a[i]!='=')
        {
                 z=(a[i]-48)*100+(a[i+1]-48)*10+(a[i+2]-48);
                 if(z==63)
                 m=0;
                 else if(z==10)
                 m=1;
                 else if(z==93)
                 m=2;else if(z==79)
                 m=3;else if(z==106)
                 m=4;else if(z==103)
                 m=5;else if(z==119)
                 m=6;else if(z==11)
                 m=7;else if(z==127)
                 m=8;else if(z==107)
                 m=9;
                 y=y*10+m;
                 i+=3;
                 l2++;
        }
        z=x+y;
        printf("%s",a);
        if(z==0)
        printf("063");
        else{u=0;
        m=z;
        while(m%10==0 && m>0)
        {
                      u++;
                      m/=10;
        }g=0;
        while(z>0)
        {
                  r=z%10;
                  g=g*10+r;
                  z/=10;
        }
        while(g>0)
        {
                  r=g%10;
                 if(r==0)
                 printf("063");
                 else if(r==1)
                 printf("010");
                 else if(r==2)
                 printf("093");else if(r==3)
                 printf("079");else if(r==4)
                 printf("106");else if(r==5)
                 printf("103");else if(r==6)
                 printf("119");else if(r==7)
                 printf("011");else if(r==8)
                 printf("127");else if(r==9)
                 printf("107");
                 g/=10;
        }
        while(u--)
        printf("063");
        }
        printf("\n");
}
}
