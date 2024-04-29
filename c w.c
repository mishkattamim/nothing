#include<stdio.h>

int main(void) {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if ((number % 3 == 0 && number % 5 == 0 && number % 7 != 0 && number % 9 != 0) ||
        (number % 3 == 0 && number % 5 != 0 && number % 7 == 0 && number % 9 != 0) ||
        (number % 3 == 0 && number % 5 != 0 && number % 7 != 0 && number % 9 == 0) ||
        (number % 3 != 0 && number % 5 == 0 && number % 7 == 0 && number % 9 != 0) ||
        (number % 3 != 0 && number % 5 == 0 && number % 7 != 0 && number % 9 == 0) ||
        (number % 3 != 0 && number % 5 != 0 && number % 7 == 0 && number % 9 == 0))
    {
        printf("The number is special\n");
    }
    else
        printf("The number is not special\n");

    return 0;
}
