#include<stdio.h>
struct Food{
    char food_name[100];
    double price;
    float tax;
    int food_code;

};
void logo()
{
    printf("\t\t\t  KINGS RESTAURANT\n");
    printf("\t\t\t  ****************\n");
    printf("\t\t\tQUALITY FOOD FOR ALL\n\n\n");
    printf("Voucher No : 000121\t\t\t\t\tDate : 11/ 12/ 2022\n");
    printf("-----------------------------------------\n");
    printf("-----------------------------------------\n");

}
void display_Manue()
{

    printf("Food Name\tPrice\t\tFood Code\n");
    printf("-----------------------------------------\n");
    printf("Burger\t\t120.00\t\t101\n");
    printf("Cake\t\t50.00\t\t103\n");
    printf("Sweets\t\t30.00\t\t104\n");
    printf("Singara\t\t20.00\t\t105\n");
    printf("Samucha\t\t20.00\t\t106\n");
    printf("Chicken\t\t520.00\t\t107\n");
    printf("Beef\t\t300.00\t\t108\n");
    printf("Mutton\t\t350.00\t\t109\n");
    printf("Dal\t\t30.00\t\t110\n");
    printf("\n\n\n");



}
void display_foods_Items(struct Food item[], int n)
{
    printf("**************************\n");
    for(int i=0; i<n; i++)
    {
        printf("**************************\n\n");
        printf("Food Name  : %s\n", item[i].food_name);
        printf("Food Price : %0.2lf\n", item[i].price);
        printf("Tax        : %0.2f\n", item[i].tax);
        printf("Food Code  : %d\n", item[i].food_code);
        printf("**************************\n\n");
    }
    printf("**************************\n");

}
struct Food foods_input()
{
    struct Food single_food;
    printf("Enter Food name, price and food code : ");

    scanf("%s %lf %d",&single_food.food_name, &single_food.price, &single_food.food_code);
    single_food.tax = single_food.price*0.05;
    return single_food;

}
int order_food()
{
    printf("Plaese Order your fevarite foods: ");

}
int main()
{
    logo();
    display_Manue();
    printf("Enter your demand quantity : ");
    int n;
    scanf("%d", &n);
    struct Food food_items[n];

    for(int i=0; i<n; i++)
    {
        food_items[i] = foods_input();
    }
    display_foods_Items(food_items, n);
    order_food();
    int food_code;
    start:
    printf("Enter ypur food code: ");
    scanf("%d", &food_code);
    while(food_code == 0)
    {
        printf("Invalide Food code!!\n\n") ;
        display_Manue();
        goto start;

    }


}
