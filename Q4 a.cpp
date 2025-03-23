#include <stdio.h>
#include <math.h>
int computeHomeValue(int popularity, int size);

int main(void)
{
    int popularity, size, homeValue;

    printf("Enter the popularity of the land: ");
    scanf("%d", &popularity);

    printf("Enter size of the house: ");
    scanf("%d", &size);

    homeValue = computeHomeValue(popularity, size);
    printf("Home value is: %d\n", homeValue);

    return 0;
}

int computeHomeValue(int popularity, int size)
{
    return (pow(popularity, 3) + pow(size, 2)) * 10000;
}

