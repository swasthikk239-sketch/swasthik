#include <stdio.h>

int main()
{
    int  i,lar,sec,arr[5]={2,3,4,5, 6};  
        lar=sec=arr[0];

    for (int i = 1;i < 5; i++)
         
           {
                if (arr[i]>lar)
                {
                sec=lar;
                lar=arr[i];
                }
                 else if (arr[i]>sec && arr[i] !=lar)
                 {sec=arr[i];}
                 }  
                  printf("second largest =%d",sec);
                 

    return 0;
}

