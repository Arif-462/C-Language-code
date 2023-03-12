#include<stdio.h>
void input_aray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
}

int get_max(int array[], int size)
{
    int max = -1;
    for(int i=0; i<size; i++)
    {
        if(max < array[i])
            max = array[i];
    }
    return max;
}
void solved()

{
    int size;
    scanf("%d",&size);

    int num [size];

    input_aray(num, size);
    int max = get_max(num, size);
    printf("max number = %d\n",max);

}



int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solved();

    }

}

