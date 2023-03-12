#include<stdio.h>
int main()
{
    int i,t,x;
    char cha;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%c",&x,&cha);


        int count=0;

        if(60>=x)
        {
            count = 60-x;
            x += 60-x ;
        }

        if(80 >= x && 60 <= x)
        {
            count = count + (80-x)*2;

            x += 80-x;
        }
        if(100>=x && x>=80)
        {
            count = count + (100-x)*3;
        }
        printf("%d minutes\n",count);

    }

    return 0;
}



#include<stdio.h>
int main()
{
    int i,t,x;
    char cha;


    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%c",&x,&cha);
        int count=0;

        if(x<=60)
        { count=60-x;
            x+=60-x;
        {
         if(60<=x && x)


    }

    return 0;
}


/* #include<stdio.h>
int main()
{
    int i,t,x,result;

     char cha;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%c",&x,&cha);

         if(x<60)
            {
                result= ((59-x))+x;
            }
            else if(x<80)
            {
                result= ((79-x)*2)+x;
            }
            else  (x<100);
            {
                result=((99-x)*3);
            }


        printf("%d minutes\n",result);
    }



    return 0;

} */
