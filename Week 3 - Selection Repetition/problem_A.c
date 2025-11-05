#include <stdio.h>

int main() {
    short a, b, c, t1, t2;
    scanf("%hd %hd %hd", &a, &b, &c);

    t1 = c - a;
    t2 = b - c;

    if (t1 == t2 && t1 >= 0) printf("%hd\n", t1);
    else puts("-1");
    return 0;
}