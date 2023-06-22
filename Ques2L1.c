#include <stdio.h>

void studgrade(int m) {
    if (m >= 90 && m <= 100) {
        printf("Grade A\n");
    } else if (m >= 75 && m <= 89) {
        printf("Grade B\n");
    } else if (m >= 60 && m <= 74) {
        printf("Grade C\n");
    } else if (m >= 50 && m <= 59) {
        printf("Grade D\n");
    } else if (m >= 0 && m <= 49) {
        printf("Grade F\n");
    } else {
        printf("Invalid mark\n");
    }
}

int main() {
    int m;
    printf("Enter the marks: ");
    scanf("%d", &m);
    studgrade(m);
    return 0;
}
