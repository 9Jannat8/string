#include<stdio.h>
#include<string.h>
main()
{
    //here considering without epsilon and separate one production to another by '|'
    int production_num = 0;//production number
    char a[10][10]/*production storage string*/, b[10][10]/*First storage string*/, c[10][10]/*Follow storage string*/ ;
    int i, j, k, l, m=0, n;//loop controlling variable
    printf("Take number of production: ");
    scanf("%d", &production_num);//taking production number
    printf("Enter the productions:\n");
    for(i=0; i<production_num; i++)//read productions
    {
        scanf("%s", &a[i]);
    }
    printf("\n---------------------------------------------\n\n");

    printf("First:\n\n");

    for(l=0; l<production_num; l++) //for each production
    {
        n=l;
        m=0;
        printf("First(%c)={", a[l][0]);
        for(i=3; i<strlen(a[l]); i++) //for each element of aproduction
        {
repeat:
            for(j=0; j<production_num; j++) //for the non-terminals
            {
                if(a[l][i]==a[j][0]) //check if ith element of l production is equal to any non-terminal?
                {
                    l=j;
                    j=0;
                    goto repeat;
                }
            }
            printf("%c", a[l][i]);
            b[n][m]=a[l][i];
            m++;

repeat1:
            for(k=i+2; k<strlen(a[l]); k++)//for checking if here any '|' so that we can take first element
            {
                if(a[l][k-1]=='|')
                {
                    i=k;
                    printf(",");
                    b[n][m]=',';
                    m++;
                    j=0;
                    goto repeat;//if we find a '|' then we go to repeat so that next first can find
                }
            }

            if(l!=n)
            {
                l=n;
                i=3;
                goto repeat1;//if a production have a non-terminal first, at first we find first for the non-terminal and then we have to find the first of current production
            }

            if(k==(strlen(a[l]))) //if there only one language in a production then no need to continue this loop for the production
            {
                break;
            }
        }
        printf("}\n");
        b[n][m]='\0';
    }

    printf("\n---------------------------------------------\n\n");


    printf("Follow:\n\n");

    for(l=0; l<production_num; l++)
    {
        int count=0;
        m=0;
        printf("Follow(%c)={",a[l][0]);
        if(l==0)
        {
            printf("$");
            c[l][m]='$';
            m++;
        }
        for(j=0; j<production_num; j++)
        {
            for(k=3; k<strlen(a[j]); k++)
            {
                if(a[j][k]==a[l][0])
                {
                    if(l==0)
                    {
                        printf(",");
                        c[l][m]=',';
                        m++;
                    }
                    for(i=0; i<production_num; i++) //for the non-terminals
                    {
                        if(a[j][k+1]==a[i][0]) //check if (k+1)th element of j production is equal to any non-terminal?
                        {
                            printf("%s", b[i]);
                            for(m=m, n=0; m<strlen(b[i]); m++,
                                    n++)
                            {
                                c[l][m]=b[i][n];
                            }
                        }
                        else count++;
                    }
                    if(count==production_num)
                    {
                        if(a[j][k+1]=='|' ||
                                (k+1)==(strlen(a[j])))
                        {
                            if(a[j][k+1]==a[j][0])
                            {

                            }
                            else
                            {
                                printf("%s", c[j]);
                                for(m=m, n=0; m<strlen(b[i]);
                                        m++, n++)
                                {
                                    c[l][m]=c[j][n];
                                }
                            }
                        }
                        else
                        {
                            printf("%c", a[j][k+1]);
                            c[l][m]=a[j][k+1];
                            m++;
                        }
                    }
                }
            }
        }
        printf("}\n");
        c[l][m]='\0';
    }

    /* some productions

    grammar-1

    S->aBSDh
    B->cC
    C->bC
    D->EF|l
    E->g|h
    F->f
    M->Ne|f
    N->hPk
    P->c|d

    */
}
