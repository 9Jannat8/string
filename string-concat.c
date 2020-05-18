#include<stdio.h>
int main()
{
    char s1[30], s2[30], s3[30];
    gets(s1);
    gets(s2);
    strcat(s1,s2);//string concatenation with function
    printf("string-s1 = %s\n", s1);
    printf("string-s2 = %s\n", s2);

    //string concatenation without function
    gets(s3);
    int i, j;
    int l1=strlen(s3);
    int l2=strlen(s2);
    for(i=l2,j=0; j<l1; i++, j++){
        s2[i]= s3[j];
    }
    s2[i]='\0';
    printf("string-s2 = %s\n", s2);
    return 0;
}
