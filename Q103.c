#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    long long sum = (long long)n * (n + 1) / 2;
    double root = sqrt(sum);
    long long x = (long long)root;
    if (x * x == sum && x >= 1 && x <= n) {
        printf("%lld\n", x);
    } else {
        printf("-1\n");
    }
    return 0;
}
