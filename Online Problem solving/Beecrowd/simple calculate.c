#include<stdio.h>

struct product{
    int code;
    int unite;
    float price;
};

struct product calculate_info()
{
    struct product p1, p2;

    scanf("%d %d %f", &p1.code, &p1.unite, &p1.price);
    scanf("%d %d %f", &p2.code, &p2.unite, &p2.price);

    float ans1= p1.unite * p1.price;
    float ans2 = p2.unite * p2.price;
    float sum = ans1+ans2;

   printf("VALOR A PAGAR: R$ %0.2f\n",sum);

}

int main()
{
    calculate_info();
    return 0;
}
