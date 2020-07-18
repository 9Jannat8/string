#include<stdio.h>
#include<string.h>
int main()
{
    char string[30];
    int i=0;
    fgets(string, sizeof string, stdin);// read string
    while(string[i] != '\0'){
        if(string[i]>= 'a' && string[i] <= 'z'){
            string[i] = string[i] - 32;
        }
        else if(string[i]>= 'A' && string[i] <= 'Z'){
            string[i] = string[i] + 32;
        }

        i++;
    }

    printf("%s\n", string);// String after exchange
    return 0;
}
