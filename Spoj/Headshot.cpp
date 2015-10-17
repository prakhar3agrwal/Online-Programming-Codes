#include<stdio.h>
#include<string.h>
main()
{
int i,z,o,l;
z=o=0;
char a[200];
scanf("%s",&a);
l=strlen(a);
for(i=0;i<l-1;i++)
if(a[i]=='0')
{
             if(a[i+1]=='0')
             z++;
             else
             o++;
}
if(l-1>=0)
if(a[l-1]=='0'){
if(a[0]=='0')
z++;
else
o++;
}

if(z!=o && l!=z)
{
        if(z>o)
        printf("SHOOT");
        else
        printf("ROTATE");
}
else
printf("EQUAL");
return 0;
}      
