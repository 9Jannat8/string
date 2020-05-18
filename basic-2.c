#include<stdio.h>
int main()
{
    char s1[5]={'A','m','a','r','\0'};
    char s2[]={'n','a','m','\0'};
    char s3[]="Jannat";
    char s4[]="amr nam \
    joya";// \ dile multiple line kaj korbe akta string a

    printf("s1=%s\n", s1);
    printf("s2=%s\n", s2);
    printf("s3=%s\n", s3);
    printf("s4=%s\n", s4);
    
    char s5[30];
    gets(s5);//scanf er poriborte ata use korte hoy...karon scanf space jukto string input nite pare na
    printf("s5=%s\n",s5);

}
