#include<stdio.h>
int main()
{
    int h,m,s;
    char c[5];

    scanf("%d:%d:%d%s",&h,&m,&s,c);

    if (strcmp(c,"PM")==0 && h<12)
    {
        h = h + 12 ;
    }
    if (strcmp(c,"AM")==0 && h==24)
    {
         h = 0 ;

    }
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}
