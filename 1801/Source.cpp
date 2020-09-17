#include <stdio.h>
int main() {
    char  i, j, input;
    printf("Enter A - Z  row: ");
    scanf_s("%c", &input);
    if (input >= 'a' & input <= 'z') {
        for (i = 97; i <= input; ++i) {
            for (j = 97; j <= i; ++j) {
                printf("%c ", j);
            }
            printf("\n");
        }
    }
    else printf("Error ");
    return 0;
}
