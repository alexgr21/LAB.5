#include <stdio.h>

int main()

{
    int matrix[50][50];
    int area1_product = 1;
    int area2_sum = 0;
    int area3_product = 1;
    int area4_sum = 0 ;
    int i;
    int j;
    int NbOfRows;

    printf("Input number of rows & columns: ");
    scanf("%i", &NbOfRows);

    for(i = 0; i < NbOfRows; i++)
        for(j = 0; j < NbOfRows; j++)
    {
            printf("\nInput matrix [%i][%i]: ",i ,j);
            scanf("%i", &matrix[i][j]);
    }

    for(i = 0; i < NbOfRows; i++)
        for(j = 0; j < NbOfRows; j++)
        {
            if(i < j && j < NbOfRows - i + 1)
                area1_product = area1_product * matrix[i][j];
            if(i > j && j < NbOfRows - i + 1)
                area2_sum = area2_sum + matrix[i][j];
            if(i > j && j > NbOfRows - i + 1)
                area3_product = area3_product * matrix[i][j];
            if(i < j && j > NbOfRows - i + 1)
                area4_sum = area4_sum + matrix[i][j];
        }

   printf("\nProduct of elements in area 1: %i", area1_product);
   printf("\nSum of elements in area 2: %i", area2_sum);
   printf("\nProduct of elements in area 3: %i", area3_product);
   printf("\nSum of elements in area 4: %i", area4_sum);

}
