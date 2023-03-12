#include<stdio.h>
void get_input_in_array(int num_arr[], int sz)
{
    for(int i=0; i<sz; i++)
    {
        scanf("%d",&num_arr[i]);
    }
}

void print_array(int arr[], int sze)
{
   for(int i=0; i<sze; i++)
   {
       printf("%d ",arr[i]*2);
   }
}

int main(void)
{
    int size;
    scanf("%d",&size);
    int num[size];
    get_input_in_array(num, size);
    print_array(num, size);


}
