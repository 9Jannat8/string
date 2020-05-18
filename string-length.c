#include <stdio.h>
int main()
{
    char s[]="Jannatul Ferdoush";
    int l, i=0, len=0;
    l=strlen(s);//string length with function
    printf("string length = %d\n", l);

    //string length without function
    while(s[i]!='\0'){
        len++;
        i++;
    }
    printf("string length = %d\n", i);

     return 0 ;
}
