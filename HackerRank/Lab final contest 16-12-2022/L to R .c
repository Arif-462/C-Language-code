#include <stdio.h>

int main()
{
    int L, R, t, prime;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d", &L, &R);

        while (L <= R)
        {
            prime = 0;
            for (int i = 2; i <= L / 2; ++i)
            {
                if (L % i == 0)
                {
                    prime = 1;
                    break;
                }
            }

            if (prime == 0)
               {
                    printf("%d ", L);
               }
            L++;
        }
        printf("\n");
    }

    return 0;
}
