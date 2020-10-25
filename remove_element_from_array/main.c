#include <stdio.h>
#define max 100

int main(void)
{
    int p[max], n, k, j;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &p[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d", p[i]);
    } 
    printf("\nEnter the position to remove: ");
    scanf("%d", &k);
    k--;
    for (j=k; j <= n - 2; j++)
    {
        p[j] = p[j + 1];
    }
    for (int i = 0; i <= n - 2; i++)
    {
        printf("%d", p[i]);
    } 
    
    return 0;
}