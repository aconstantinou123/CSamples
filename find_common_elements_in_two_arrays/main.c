#include <stdio.h>
#define max 100

int numberExists(int[], int, int);

int main(void)
{
    int p[max], q[max], r[max];
    int m, n;
    int l = 0;
    printf("Enter the length of the first array: ");
    scanf("%d", &m);
    for (int i = 0; i <= m - 1; i++)
        scanf("%d", &p[i]);
    printf("Enter the length of the second array: ");
    scanf("%d", &n);
    for (int i = 0; i <= n - 1; i++)
        scanf("%d", &q[i]);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(p[i] == q[j] && !numberExists(r, l, q[j])){
                r[l] = q[j];
                l++;
            }
        }
        
    }
    if(!l) 
    {
        printf("No matching elements\n");
        return 0;
    }
    printf("Matches: \n");
    for (int i = 0; i < l; i++)
        printf("%d\t", r[i]);
    printf("\n");
    return 0;
}

int numberExists(int r[], int l, int c)
{
    if(!l) return 0;
    for (int i = 0; i < l; i++)
        if(r[i] == c) return 1;
    return 0;
}