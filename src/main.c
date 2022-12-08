#include <math.h>
#include <stdio.h>

#define H 0.00000000000001

double derivative(double (*func)(double), double x) {
    // the difference in y
    // f(x + H) - f(x)
    double dy = (func((double)x + H) - func(x));
    // dy/dx at x
    return dy / H;
}

double f(double x) { return sqrt(x); }

double lin(double (*func)(double), double a) {
    int x = round(a);
    return func(a) + derivative(func, a) * (x - a);
}

int main() {
    double x = 16.1;

    double out = lin(f, x);
    printf("lin(%.2lf): %lf\n", x, out);

    double real = f(x);
    printf("f(%.2lf): %lf\n", x, real);

    printf("|Δ|: %lf\n", fabs(out - real));
}
