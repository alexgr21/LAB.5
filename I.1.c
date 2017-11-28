#include <stdio.h>

int main()
{
int vector[100];
int x = 0;
int NbOfElements;
int i;
float avg;

printf("Input the number of elements: ");
scanf("%d", &NbOfElements);

for(i = 0; i < NbOfElements; i++)
{
    printf("\nInput element number %d: ", i);
    scanf("%d", &vector[i]);
}

for(i = 1; i <= NbOfElements - 1; i++)
{
    float avg;
    avg = (float)(vector[i-1] + vector[i+1]) / 2;

    if(vector[i] == avg)
        x++;
}

printf("The number of elements from the vector which are equal to the average value of the neighbor elements is: %d", x);

}
