#include <stdio.h>
int main()

{
    int array[5], i;
    printf("Please enter the array value :\n");

    for(i = 0; i < 5; i++)

    {
        scanf("%d",&array[i]);
    }

    printf("\n");

    for(i = 4; i >= 0; i--)

    {
        printf("%d", array[i]);
    }

    return 0;
}
