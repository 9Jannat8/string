#include<stdio.h>
#include<string.h>
int main()
{
    char string[30], subs[30];
    int i=0, j, sl, ssl, c=0;
    fgets(string, sizeof string, stdin);// read string
    fgets(subs, sizeof subs, stdin);//read sub string

    ssl=strlen(subs);//length of sub string

    while(string[i]!= '\0'){

        if(string[i] == subs[0]){

            for(j=1; j<ssl-1; j++){

                if(string[i+1] == subs[j]){
                    c++;
                    i++;
                    continue;
                }
                else{
                    c=0;
                    break;
                }

            }
        }

        if(c== ssl-2){
            break;
        }
        i++;
    }

    if(c == ssl-2){
        printf("exist\n");
    }
    else{
       printf("not exist\n");
    }
    return 0;
}
