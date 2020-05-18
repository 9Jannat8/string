#include<stdio.h>
int main() {
    char s1[30], s2[30], s3[30];
    gets(s1);
    strcpy(s2, s1);//string copy with function---strcpy(destination,source);
    printf("String1= %s\n", s1);
    printf("String2= %s\n", s2);

    //string copy without function
    int i=0;
    while(s1[i] != '\0'){
        s3[i]=s1[i];
        i++;
    }
    s3[i]='\0';
    printf("String3= %s\n", s3);

}
