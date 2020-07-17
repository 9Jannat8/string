#include<stdio.h>
#include<string.h>
int main()
{
    char string[30], subs[30];
    int position, lss, i, j; //lss means length of sub string
    fgets(string, sizeof string, stdin);

    scanf("%d", &position);//take position
    scanf("%d", &lss); //take length of sub string

    for(i=0, j=position-1; i<lss; i++, j++){
                subs[i]=string[j];
    }
    subs[i-1]='\0';
    printf("%s\n", subs);
    return 0;
}
