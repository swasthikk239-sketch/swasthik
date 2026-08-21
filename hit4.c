#include <stdio.h>

int main()
{
    char arr[5] = {'b', 'a', 'b', 'a', 'd'};
    char lastRepeated = '\0';

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                lastRepeated = arr[i];
            }
        }
    }

    if (lastRepeated != '\0')
        printf("Last repeated character = %c", lastRepeated);
    else
        printf("No repeated character");

    return 0;
}
