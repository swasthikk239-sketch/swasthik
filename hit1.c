#include <stdio.h>

int main()
{
    int  i,j,k,key, arr[5][5][5]={
    {2,3,4,5, 6},
    {3 ,4 ,5 ,6 ,7},
    {5,6,7,8,9}
    };
      int found=0;        
          
    printf("Enter a Key: ");
    scanf("%d", &key);

    for (int i = 0; i < 5; i++)
        for (int j = 0; j <5; j++)
        for (int k = 0; k <5; k++)
           
            {
                if (arr[i][j][k] == key)
                {
                    printf("Found in arr[%d][%d][%d]",i,j,k);
                    found = 1;
                    return 0;
                }
            }

    if (!found)
        printf("Not found");

    return 0;
}

