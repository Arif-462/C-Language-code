/*
#include<stdio.h>
int main()
{
    int arr[5]= {213,10,325,507,100};//using given input fixed.

    int max=arr[0],i;


    for(i=1; i<5; i+=1)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d\n",max);

    return 0;
}

*/

#include<stdio.h>// input from user in Array.
int main(){
    int n,i;
    int arr[100];
    scanf("%d",&n);

    for(i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int max = arr[0];

    for(i = 0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("%d",max);


}


