#include <stdio.h>

int calculateTotal(int e, int p, int m, int c, int pr);
float calculateAverage(int total, int n);
char calculateGrade(float avg);

int main () {
    int n = 5, total;
    int English, Physics, Math, Computer, Programming;

    printf("Enter English marks: ");
    scanf("%d", &English);

    printf("Enter Physics marks: ");
    scanf("%d", &Physics);

    printf("Enter Math marks: ");
    scanf("%d", &Math);

    printf("Enter Computer marks: ");
    scanf("%d", &Computer);

    printf("Enter Programming marks: ");
    scanf("%d", &Programming);

    total = calculateTotal(English, Physics, Math, Computer, Programming);
    printf("\nTotal = %d", total);

    float avg = calculateAverage(total, n);
    printf("\nAverage = %.2f", avg);

    char grade = calculateGrade(avg);
    printf("\nGrade = %c", grade);

    return 0;
}

int calculateTotal(int e, int p, int m, int c, int pr) {
    return e + p + m + c + pr;
}

float calculateAverage(int total, int n) {
    return (float) total / n;
}

char calculateGrade(float avg) {
    if (avg >= 80)
        return 'A';
    else if (avg >= 70)
        return 'B';
    else if (avg >= 50)
        return 'C';
    else if (avg >= 40)
        return 'D';
    else
        return 'F';
}
