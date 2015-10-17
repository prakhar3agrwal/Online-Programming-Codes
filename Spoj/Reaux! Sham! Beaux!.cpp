#include<stdio.h>
#include<string.h>
int Czech(char *a)
{
    if(strcmp(a,"Kamen")==0)
    return 1;
    else if(strcmp(a,"Nuzky")==0)
    return 2;
    else if(strcmp(a,"Papir")==0)
    return 3;
}
int English(char *a)
{
    if(strcmp(a,"Rock")==0)
    return 1;
    else if(strcmp(a,"Scissors")==0)
    return 2;
    else if(strcmp(a,"Paper")==0)
    return 3;
}
int French(char *a)
{
    if(strcmp(a,"Pierre")==0)
    return 1;
    else if(strcmp(a,"Ciseaux")==0)
    return 2;
    else if(strcmp(a,"Feuille")==0)
    return 3;
}
int German(char *a)
{
    if(strcmp(a,"Stein")==0)
    return 1;
    else if(strcmp(a,"Schere")==0)
    return 2;
    else if(strcmp(a,"Papier")==0)
    return 3;
}
int Hungarian(char *a)
{
    if(strcmp(a,"Ko")==0 || strcmp(a,"Koe")==0)
    return 1;
    else if(strcmp(a,"Ollo")==0 || strcmp(a,"Olloo")==0)
    return 2;
    else if(strcmp(a,"Papir")==0)
    return 3;
}
int Italian(char *a)
{
    if(strcmp(a,"Sasso")==0 || strcmp(a,"Roccia")==0)
    return 1;
    else if(strcmp(a,"Forbice")==0)
    return 2;
    else if(strcmp(a,"Carta")==0 || strcmp(a,"Rete")==0)
    return 3;
}
int Japanese(char *a)
{
    if(strcmp(a,"Guu")==0)
    return 1;
    else if(strcmp(a,"Choki")==0)
    return 2;
    else if(strcmp(a,"Paa")==0)
    return 3;
}
int Polish(char *a)
{
    if(strcmp(a,"Kamien")==0)
    return 1;
    else if(strcmp(a,"Nozyce")==0)
    return 2;
    else if(strcmp(a,"Papier")==0)
    return 3;
}
int Spanish(char *a)
{
    if(strcmp(a,"Piedra")==0)
    return 1;
    else if(strcmp(a,"Tijera")==0)
    return 2;
    else if(strcmp(a,"Papel")==0)
    return 3;
}
int main()
{
char x[200],l1[10],l2[10],n1[200],n2[200];
int p1,p2,g1,g2,d=0,f=0;
while(1)
{
        
        {
            g1=g2=p1=p2=0;
            d++;
            scanf("%s%s%s%s",&l1,&n1,&l2,&n2);
            while(1)
            {
                                   scanf("%s",&x);
                                   if( strcmp(x,".")==0)
                                   {
                                       f=1;
                                       break;
                                   }
                                   else if (strcmp(x,"-")==0)
                                   break;
                                   if(strcmp(l1,"cs")==0)
                                   g1=Czech(x);
                                   else if(strcmp(l1,"en")==0)
                                   g1=English(x);
                                   else if(strcmp(l1,"fr")==0)
                                   g1=French(x);
                                   else if(strcmp(l1,"de")==0)
                                   g1=German(x);
                                   else if(strcmp(l1,"hu")==0)
                                   g1=Hungarian(x);
                                   else if(strcmp(l1,"it")==0)
                                   g1=Italian(x);
                                   else if(strcmp(l1,"jp")==0)
                                   g1=Japanese(x);
                                   else if(strcmp(l1,"pl")==0)
                                   g1=Polish(x);
                                   else if(strcmp(l1,"es")==0)
                                   g1=Spanish(x);
                                   scanf("%s",&x);
                                   if(strcmp(l2,"cs")==0)
                                   g2=Czech(x);
                                   else if(strcmp(l2,"en")==0)
                                   g2=English(x);
                                   else if(strcmp(l2,"fr")==0)
                                   g2=French(x);
                                   else if(strcmp(l2,"de")==0)
                                   g2=German(x);
                                   else if(strcmp(l2,"hu")==0)
                                   g2=Hungarian(x);
                                   else if(strcmp(l2,"it")==0)
                                   g2=Italian(x);
                                   else if(strcmp(l2,"jp")==0)
                                   g2=Japanese(x);
                                   else if(strcmp(l2,"pl")==0)
                                   g2=Polish(x);
                                   else if(strcmp(l2,"es")==0)
                                   g2=Spanish(x);
                                   if(g1!=g2)
                                   {
                                             if(g1+g2==3)
                                             if(g1==1)
                                             p1++;
                                             else p2++;
                                             else if(g1+g2==4)
                                             if(g1==1)
                                             p2++;
                                             else p1++;
                                             else if(g1+g2==5)
                                             if(g1==2)
                                             p1++;
                                             else p2++;
                                   }
            }
            printf("Game #%d:\n",d);
            if(p1==1)
            printf("%s: 1 point\n",n1);
            else 
            printf("%s: %d points\n",n1,p1);
            if(p2==1)
            printf("%s: 1 point\n",n2);
            else 
            printf("%s: %d points\n",n2,p2);
            if(p1==p2)
            printf("TIED GAME\n\n");
            else if(p1>p2)
            printf("WINNER: %s\n\n",n1);
            else if(p1<p2)            
            printf("WINNER: %s\n\n",n2);  
            if(f==1)
            break; 
        }      
}   
}                      

