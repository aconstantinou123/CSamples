#include <stdio.h>

int main(void)
{
    int matA[2][3], matB[3][4], matR[2][4];
    printf("Enter the values of the first matrix in order: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matA[i][j]);
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d\t", matA[i][j]);
        }
        printf("\n");   
    }
    printf("Enter the values of the second matrix in order: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matB[i][j]);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%4d\t", matB[i][j]);
        }
        printf("\n");   
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matR[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
               matR[i][j] = matR[i][j] + matA[i][k] * matB[k][j];
            }
            printf("%4d\t", matR[i][j]);  
        }
        printf("\n");
    }
    
    return 0;
}