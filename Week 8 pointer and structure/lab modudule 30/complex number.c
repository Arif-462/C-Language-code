#include<stdio.h>

struct comp{
    double real;
    double img;
};

void print_comp(struct comp c)
{
    printf("%0.2lf + %0.2lfi", c.real, c.img);
}

struct comp add_compl(struct comp a, struct comp b)
{
    struct comp ans;
    ans.real = a.real + b.real;
    ans.img = a.img + b.img;

    return ans;
}
struct comp multiply_comple(struct comp a, struct comp b)
{
    struct comp res;
    res.real = a.real * b.real - a.img * b.img;
    res.img = a.real * b.img + a.img * b.real;
    return res;
}
int main()
{
    struct comp cl = {5.9, 3.1};
    struct comp cp = {-2.5, 3.7};

    print_comp(add_compl(cl,cp));
    printf("\n");
    print_comp(multiply_comple(cl,cp));


    return 0;
}
