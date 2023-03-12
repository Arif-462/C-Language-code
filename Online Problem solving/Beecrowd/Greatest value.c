#include<stdio.h>
#include<math.h>
int greatest()
{
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    int ans = (a+b+abs(a-b))/2;
    ans = (ans+c+abs(ans-c))/2;
    return ans;
}
int main()
{
    int ans = greatest();
    printf("%d eh o maior\n",ans);

    return 0;
}
