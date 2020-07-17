#include<stdio.h>
#include<string.h>
int main()
{
    char name[25][50], temp[20];
    int i, j, n;
    scanf("%d", &n);//number of strings
    for(i=0; i<=n; i++){
        fgets(name[i], sizeof name, stdin);
    }// loop for read strings


    for(i=1; i<=n; i++){
        for(j=0; j<=n-i; j++){
            if(strcmp(name[j],name[j+1]) > 0){
                strcpy(temp, name[j]);
                strcpy(name[j], name[j+1]);
                strcpy(name[j+1], temp);
            }
        }
    }// loop of bubble sort

    for(i=0; i<=n; i++){
        printf("%s\n", name[i]);
    }//loop of printing strings

    return 0;
}
