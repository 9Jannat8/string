#include<stdio.h>
int main()
{
    char s1[100], s2[100];
    int i, j=0, c=0;
    fgets(s1, sizeof s1, stdin);
    fgets(s2, sizeof s2, stdin);
    i=0;
    while(s1[i]==s2[i]){
            i++;
    }
    if(s1[i-1]=='\0' && s2[i-1]=='\0'){
        printf("both same");
    }
    else if(s1[i]>s2[i]){
        printf("s1 is grater\n");
    }
    else if(s1[i]<s2[i]){
        printf("s2 is grater\n");
    }
}
