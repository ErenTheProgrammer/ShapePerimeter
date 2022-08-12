#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float a, b, roc, los, bot, hot, lot, lor, bor;
    char c;
    int d, e, f, f1, f2, f3, f4, c1, c2, s1, s2, t1, t2, r1, r2, scr;

start:
    while (1)
    {
        printf("\nWhich Shape's Perimeter Do You Want To Find\n");
        printf("1.Circle\n");
        printf("2.Square\n");
        printf("3.Triangle\n");
        printf("4.Rectangle\n");
        printf("0.Quits\n");
        printf("> ");
        scanf("%d", &f);
        if (f == 1)
        {
            printf("Please Input The Radius Of Circle\n");
            printf("> ");
            scanf("%f", &roc);
            printf("The Perimeter Of This Circle Is %.2f\n", 2 * roc * M_PI);
            goto start;
        }
        else if (f == 2)
        {

            printf("Please Input The Length Of Square\n");
            printf("> ");
            scanf("%f", &los);
            printf("The Perimeter Of This Square Is %.2f\n", los + los + los + los);
            goto start;
        }
        else if (f == 3)
        {
            printf("Please Input The Length Of All Three Sides Of Triangle\n");
            printf("First Side \n");
            printf("> ");
            scanf("%f", &bot);
            printf("Second Side \n");
            printf("> ");
            scanf("%f", &hot);
            printf("Third Side \n");
            printf("> ");
            scanf("%f", &lot);
            printf("The Perimeter Of This Triangle Is %.2f\n", bot + hot + lot);
            goto start;
        }
        else if (f == 4)
        {

            printf("Please Input The Length Of The Rectangle\n");
            printf("> ");
            scanf("%f", &lor);
            printf("Please Input The Breadht Of The Rectangle\n");
            printf("> ");
            scanf("%f", &bor);
            printf("The Perimeter Of This Rectangle Is %.2f\n", lor + bor + lor + bor);

            goto start;
        }
        else if (f == 0)
        {
            goto end;
        }

        else
        {
            printf("Please Input A Valid Number!\n");
        }
    }
end:
    return 0;
}
