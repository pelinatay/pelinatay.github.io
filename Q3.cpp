#include <stdio.h>
#include <math.h>

int main(void) {
    int popularity, size;
    long homevalue;

   
    printf("Enter the popularity of the land: ");
    scanf("%d", &popularity);

    printf("Enter the size of the house: ");
    scanf("%d", &size);

    homevalue = (pow(popularity, 3) + pow(size, 2)) * 10000;

    printf("Home value is: %ld \n", homevalue);

    return 0;
}

