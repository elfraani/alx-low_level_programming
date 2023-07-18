#include <stdio.h>

int main() {
    int print_sign(int n) {
    if (n > 0) {
        printf("+\n");
        return 1;
    } else if (n == 0) {
        printf("0\n");
        return 0;
    } else {
        printf("-\n");
        return -1;
    }
}
    int number = 5;
    int sign = print_sign(number);
    printf("Returned sign: %d\n", sign);

    number = 0;
    sign = print_sign(number);
    printf("Returned sign: %d\n", sign);

    number = -3;
    sign = print_sign(number);
    printf("Returned sign: %d\n", sign);

    return 0;

}
}
