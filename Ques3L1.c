#include <stdio.h>

int main() {
    int r, p, m, c;
    char name[50];

    printf("Enter Roll No: ");
    scanf("%d", &r);
    printf("Enter Student Name: ");
    scanf(" %[^\n]s", name);
    printf("Enter Physics Marks: ");
    scanf("%d", &p);
    printf("Enter Math Marks: ");
    scanf("%d", &m);
    printf("Enter Chemistry Marks: ");
    scanf("%d", &c);
    int tot = p + m + c;
    float percentage = (float)tot / 3;

    printf("Roll No: %d\n", r);
    printf("Name: %s\n", name);
    printf("Physics Marks: %d\n", p);
    printf("Math Marks: %d\n", m);
    printf("Chemistry Marks: %d\n", c);
    printf("Total Marks: %d\n", tot);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}