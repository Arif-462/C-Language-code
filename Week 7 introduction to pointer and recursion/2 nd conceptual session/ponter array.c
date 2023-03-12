#include<stdio.h>
void veiw_array_seze(int *arr,int sze)
{
    int size=sizeof(*arr)/sizeof(int);
     printf("size= %d\n",size);
     printf("size= %d\n",arr[0]);
     printf("size= %d\n",*arr);
     for(int i=0; i<sze-1; i++)
     {
         printf("%d ",*(arr+i));
     }
}
int main(void)
{
    int arr[]={12,20,40,60,80};
    veiw_array_seze(arr, 5);

//printf("size= %d",size);

    return 0;
}
