#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number,account, password;

    int a[3][6] = {{123,456,789,336,775,566},
                   {456,789,888,558,666,221},
                   {9000,5000,6000,10000,12000,7000}};
    scanf("%d",&number);
    for(int i = 0;i < number;i++){
        scanf("%d %d",&account,&password);
        for(int j = 0;j <= 6;j++){
            if(account == a[0][j]){
                if(password == a[1][j]){
                printf("%d\n",a[2][j]);
                break;
                }
            }
            if(j == 6){
                printf("error\n");
            }

            }
        }

    }

