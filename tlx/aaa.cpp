#include <cstdio>

int main() {
int a = 45;
int b = 56;
do {
    a = a - 3;
    b = b - 5;
} while ((a >= 0) && (b >= 0));
printf("%d %d", a, b);
}