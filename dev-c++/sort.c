#include <stdio.h>
int main()
    {
 
        int i, j, a, n, number[30];
        printf("Heden tootoi daraalal ve? \n");
        scanf("%d", &n);
 
        printf("Toonudaa ognu \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        printf("Usuj bui daraalal \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
 
    }