# linearization

```c
double lin(double (*func)(double), double a) {
    int x = round(a);
    return func(a) + derivative(func, a) * (x - a);
}
```

```
l(x) = f(a) + f'(a) * (x - a)
for a value of a near x
```
