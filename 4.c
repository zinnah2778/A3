#include <stdio.h>
int main()

{
    int array[5], i, count=0;

    printf("Please enter the array value :\n");

    for(i = 0; i < 5; i++)

    {
        scanf("%d", &array[i]);
    }

    printf("\n");

    for(i = 0; i < 5; i++)

    {
        if(array[i] < 10)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
