#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int number;
    scanf("%d",&number);
    int a[number];
    bool ans = true;
    for(int i = 0;i < number;i++){
        scanf("%d",&(a[i]));


    for (int j = 2;(j * j) <= a[i] ;j++ ){
    if ((a[i] % j) == 0 ){
        ans = false;
    }
    }
    if(ans == true){
        printf("YES");
    }
    else if(ans == false){
        printf("NO");
    }
    ans = true;
    }
}

