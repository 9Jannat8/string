#include<stdio.h>
int main()
{
    char s1[100], s2[100];
    int i, j, c=1, ii=0, n=0;
    int ar[100];
    fgets(s1, sizeof s1, stdin);
    //fgets(s2, sizeof s2, stdin);
    for(i=0; s1[i]!='\0'; i++){
        for(j=i+1; s1[j]!='\0'; j++){
            if(s1[i]==s1[j] && s1[i] != '^'){
                    c++;
                    s1[j]='^';
            }
        }
        if(c>n){
            ii=i;
            n=c;
        }
        c=1;
    }
    printf("%c appear highest time %d\n", s1[ii], n);
}
