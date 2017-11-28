#include <stdio.h>

int main()
{
int sequence[100];
int x = 0;
int NbOfElements;
int i;
int ratio;
float avg;

printf("Input the number of elements in the sequence: ");
scanf("%d", &NbOfElements);

for(i = 0; i < NbOfElements; i++)
{
    printf("\nInput element number %d: ", i);
    scanf("%d", &sequence[i]);
}

for(i = 1; i <= NbOfElements - 1; i++)
{
    float avg;
    avg = (float)(sequence[i-1] + sequence[i+1]) / 2;

    if(sequence[i] == avg)
        {x = 1;
        break;}
}

if(x == 1)
{
    ratio = sequence[1] - sequence[0];
    printf("\nThe elements are in aritmethical progression with the ratio %d", ratio);
}
else
    printf("\nThe elements aren''t in aritmethical progression");

}
