#include<stdio.h>
#include<string.h>
int main()
{
    // Jannatul Ferdoush, 180121033
    char plainText[100], encryptText[100], decryptText[100];
    int key, i, j;

    printf("Enter a string: ");
    fgets(plainText, sizeof plainText, stdin);

    printf("\nEnter a key: ");
    scanf("%d", &key);

    printf("\nThe plaintext before encryption: ");
    printf("%s", plainText);


    i=0;
    while(plainText[i] != '\0')
    {
        if(plainText[i]>='w' && plainText[i]<='z' || plainText[i]>='W' && plainText[i]<='Z')
        {
            if(plainText[i]=='w')
                encryptText[i]='a';
            else if(plainText[i]=='W')
                encryptText[i]='A';
            else if(plainText[i]=='x')
                encryptText[i]='b';
            else if(plainText[i]=='X')
                encryptText[i]='B';
            else if(plainText[i]=='y')
                encryptText[i]='c';
            else if(plainText[i]=='Y')
                encryptText[i]='C';
            else if(plainText[i]=='z')
                encryptText[i]='d';
            else if(plainText[i]=='Z')
                encryptText[i]='D';
        }
        else if(plainText[i]==' ')
            encryptText[i]=' ';

        else
        {
            encryptText[i]= plainText[i]+key;
        }

        i++;
    }
    encryptText[i-1]='\0';
    printf("\nAfter encryption = %s", encryptText);

    printf("\n\n");

    i=0;
    while(encryptText[i] != '\0')
    {
        if(encryptText[i]>='a' && encryptText[i]<='d' || encryptText[i]>='A' && encryptText[i]<='D')
        {
            if(encryptText[i]=='a')
                decryptText[i]='w';
            else if(encryptText[i]=='A')
                decryptText[i]='W';
            else if(encryptText[i]=='b')
                decryptText[i]='x';
            else if(encryptText[i]=='B')
                decryptText[i]='X';
            else if(encryptText[i]=='c')
                decryptText[i]='y';
            else if(encryptText[i]=='C')
                decryptText[i]='Y';
            else if(encryptText[i]=='d')
                decryptText[i]='z';
            else if(encryptText[i]=='D')
                decryptText[i]='Z';
        }

        else if(encryptText[i]==' ')
            decryptText[i]=' ';

        else
        {
            decryptText[i]= encryptText[i]-key;
        }

        i++;
    }
    decryptText[i]='\0';
    printf("After decryption = %s\n", decryptText);

    return 0;
}
