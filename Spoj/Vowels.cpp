#include<stdio.h>
main()
{
char a1[100000];
int i=0,j=0;
scanf("%s",&a1);
while(a1[i]!='\0')
{
                 if(a1[i]=='a' || a1[i]=='e' || a1[i]=='i' || a1[i]=='o' || a1[i]=='u' || a1[i]=='A' || a1[i]=='E' || a1[i]=='I' || a1[i]=='O' || a1[i]=='U')
                 j++;
                 i++;
}
printf("%d\n",j);
return 0;
}
