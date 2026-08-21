#include <stdio.h>

int main()
{
    char arr[5] = {'a', 'b', 'c', 'b', 'd'};


    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("First repeated character = %c", arr[i]);
                return 0;
            }
        }
    }

    printf("No repeated character");

    return 0;
}
