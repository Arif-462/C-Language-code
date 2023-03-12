#include<stdio.h>
int main()
{
    int N,x;
    int ara[100];
    int i;


    scanf("%d",&N);

    for(i=1; i<N; i++)
    {

        ara [i] =0;

    }
    for(i=1; i<N; i++)
    {
        scanf("%d",&x);
        ara [x] =1;

    }
    for(i=1; i<=N; i++)

    {
        //printf("Testing %d position\n",i);
        if(ara[i]==0)
        {
            printf("%d\n",i);
            break; // if use break when find out result than stop. otherwise continue process...
        }
    }
    return 0;
}
