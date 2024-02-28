/*#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int R = 100;
    int No[R];
    for (int i = 0; i < R; i++) {
        No[i] = NULL;
    }

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        No[num]++;
    }

    for (int i = 0; i < R; i++) {
        if (No[i] > 0) {
            printf("%d occurs %d times\n", i, No[i]);
        }
    }

    return 0;
}*/


/*#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    int c[26] = {0};
    int R[26] = {0};

    for (int i = 0; str[i]; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z'))
        {
            c[str[i]-'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (c[i] > 1)
        {
            R[i] = 1;
        }
    }

    for (int i = 0; str[i]; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') && !R[str[i]-'a'])
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}*/
