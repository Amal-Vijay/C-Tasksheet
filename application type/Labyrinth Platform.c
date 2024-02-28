#include<stdio.h>
void findSteps()
{
    int n, m, H;
    scanf("%d", &n);         //number of platforms
    scanf("%d", &m);         //passages
    scanf("%d", &H);         //maximum level
    int plat[n],pass[m][2],changes[n];

    for(int i=0; i<n; i++)
        scanf("%d", &plat[i]);

    for(int i=0; i<n; i++)
        scanf("%d", &changes[i]);

    for(int i=0; i<m; i++)
    {
        scanf("%d", &pass[i][0]);
        scanf("%d", &pass[i][1]);
    }

    int n1[n], c = 1, j = 0;
    n1[j] = 1;
    while(n1[j] != n)
    {
        for(int i = 0; i < n; i++)
        {
            if(n1[j] == pass[i][0])
            {
                n1[++j] = pass[i][1];
                pass[i][0] = 0;
                pass[i][1] = 0;
                c++;
                break;
            }
            else if(n1[j] == pass[i][1])
            {
                n1[++j] = pass[i][0];
                pass[i][0] = 0;
                pass[i][1] = 0;
                c++;
                break;
            }
        }
    }

    printf("\n");
    int count = 1, i = 0;
    while(n1[i] != n)
    {
        if(plat[n1[i] - 1] != plat[n1[i + 1] - 1])
        {
            count++;
            for(int j = 0; j < n; j++)
            {
                plat[j] = (plat[j] + changes[j]) % H;
            }
        }
        if(plat[n1[i] - 1] == plat[n1[i + 1] - 1])
        {
            i++;
        }
        if(count > 100)
        {
            count = -1;
            break;
        }
    }
    printf("%d\n", count);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t)
    {
        findSteps();
        t--;
    }
    return 0;
}
