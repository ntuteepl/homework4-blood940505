#include <stdio.h>
#include <stdlib.h>//4654

int main()
{
    int n=0,car,end,temp;
    int s[24]={0},d[24]={0};
    while(scanf("%d%d",&s[n],&d[n])!=EOF)
    {
       n++;
    }
    int ssch[256][512]={0};
    int dsch[256][512]={0};

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
         if(s[i]>s[j])
         {
          temp=s[j];
          s[j]=s[i];
          s[i]=temp;
          temp=d[j];
          d[j]=d[i];
          d[i]=temp;
         }
        }
    }

    end=0;

    for(int i=0;i<n;i++)
    {

          for(int k=0;k<n;k++)
          {
              if(s[k]>=end && s[k]!=0)
              {
                  end=d[k];
                  ssch[i][j]=s[k];
                  dsch[i][j]=d[k];
                  s[k]=0;
                  d[k]=0;
                  j++;
              }
          
        }
        end=0;
    }
    for(int c=0;c<=n;c++)
    {
        if(ssch[c][0]==0)
        {
            car=c;
            printf("%d\n",car);
            break;
        }
    }

    for(int driver = 0; driver < car; driver++){ 
        printf("Driver %d's schedule is", driver+1 );
        for(int f = 0; f < n*2; f++)
        {
            if(ssch[driver][f]!=0)
            {
                printf(" %d %d",ssch[driver][f],dsch[driver][f]);
            }
            else
            {
                printf("\n");
                break;
            }
        }

    }
}

