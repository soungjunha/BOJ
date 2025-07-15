#include <stdio.h>

int sign(double x) {
    if (x > 0) return 1;
    if (x < 0) return -1;
    return 0;
}

int main() {

    double a, b, c;
    double x1, x2, y1, y2;

    scanf("%lf%lf%lf", &a, &b, &c);
    scanf("%lf%lf%lf%lf", &x1, &x2, &y1, &y2);

    double x[4] = { x1,x1,x2,x2 };
    double y[4] = { y1,y2,y1,y2 };

    if (b < 0) a *= -1, b *= -1, c *= -1;

    int hasPositive = 0;
    int hasNegative = 0;

    for (int i = 0; i < 4; i++) {
        double val = a * x[i] + b * y[i] + c;
        int s = sign(val);
        if (s > 0) hasPositive = 1;
        if (s < 0) hasNegative = 1;
    }

    if (hasPositive && hasNegative) {
        printf("Poor\n");
    }
    else {
        printf("Lucky\n");
    }

}
