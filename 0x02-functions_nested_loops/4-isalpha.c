#include <stdio.h>
int _isalpha(int c) {
    return isalpha(c) != 0 ? 1 : 0;
}

int main() {
    char ch = 'A';
    int result = _isalpha(ch);
    printf("%c is alphabetic: %d\n", ch, result);

    ch = '4';
    result = _isalpha(ch);
    printf("%c is alphabetic: %d\n", ch, result);

    return 0;
}
