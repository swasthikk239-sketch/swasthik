#include <stdio.h>

int main()
{
    int  i,j,key, arr[5][5]={
    {2,3,4,5, 6},
    {3 ,4 ,5 ,6 ,7}
    };
      int found=0;        
          
    printf("Enter a Key: ");
    scanf("%d", &key);

    for (int i = 0; i < 5; i++)
        for (int j = 0; j <5; j++)
           
            {
                if (arr[i][j] == key)
                {
                    printf("Found in arr[%d][%d]",i,j);
                    found = 1;
                    return 0;
                }
            }

    if (!found)
        printf("Not found");

    return 0;
}

