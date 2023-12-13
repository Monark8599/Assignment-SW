#include <stdio.h>

int main(void)
{
    int i, n;
    int ehniih = 0, daraagih = 1;
    int goltoo = ehniih + daraagih;
    printf("Heden too: ");
    scanf("%d", &n);
    printf("Fibonacci toonud: %d, ", ehniih, daraagih);

    for (i = 3; i <= n; ++i)
    {
        printf("%d, ", goltoo);
        ehniih = daraagih;
        daraagih = goltoo;
        goltoo = ehniih + daraagih;
    }

    return 0;
}