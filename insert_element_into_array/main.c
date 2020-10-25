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
    printf("\nEnter the position where to insert: ");
    scanf("%d", &k);
    k--;
    for (j=n - 1; j >= k; j--)
    {
        p[j + 1] = p[j];
    }
    printf("Enter element to insert: ");
    scanf("%d", &p[k]);
    for (int i = 0; i <= n; i++)
    {
        printf("%d", p[i]);
    } 
    
    return 0;
}