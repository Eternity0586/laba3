#include<math.h>
#include<stdio.h>

int main()
{
    long int step;
    double f,x=-1.0 ,h;
    scanf("%lf",&h);
    if (h==0)
    {
        printf("x value is incorrect! \n");
        return 0;
    }
    step = (3.0/h) + 1;
    printf("x               f(x)\n");
    printf("-------------------------------\n");
    for(step;step!=0;step--)
    {
        if (-1.0<=x && x <=0)
        {
            double f=(exp(-2*sin(x)));
            printf("x = %lf | f(x) = %lf\n",x,f);
        }
        else
        {
            f=((x*x)-(1/tan(x) ));
            printf("x = %lf | f(x) = %lf\n",x,f);
        }
        x+=h;
    }
    return 0;
}
