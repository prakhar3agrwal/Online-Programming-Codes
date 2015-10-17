#include<stdio.h>
#include<string.h>
main()
{
char a[10];
gets(a);
if(strlen(a)==0)
printf("13\n");
else
printf("%d\n",a[0]);
return 0;
}
