#include<stdio.h>
#include<string.h>
int main()
{
    char s[100], temp[30];
    gets(s);
    int l= strlen(s);
    int i, j;
    for(i=0; i<l; i++)
    {
        for(j=i+1; j<l; j++)
        {
            if((int)s[i] > (int)s[j]){
                temp[i]= s[i];
                s[i]=s[j];
                s[j]=temp[i];
            }
        }
    }
    for(i=0; i<l; i++){
       printf("%c", s[i]);
    }
    printf("\n");
}
