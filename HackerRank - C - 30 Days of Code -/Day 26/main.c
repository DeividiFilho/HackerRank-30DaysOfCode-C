#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calculate_fine(int actual_day, int actual_month, int actual_year, int expected_day, int expected_month, int expected_year) {
    if (actual_year > expected_year) {
        return 10000;
    } else if (actual_year == expected_year) {
        if (actual_month > expected_month) {
            return 500 * (actual_month - expected_month);
        } else if (actual_month == expected_month && actual_day > expected_day) {
            return 15 * (actual_day - expected_day);
        }
    }

    return 0;
}

int main() {
    int actual_day, actual_month, actual_year;
    int expected_day, expected_month, expected_year;

    scanf("%d %d %d", &actual_day, &actual_month, &actual_year);
    scanf("%d %d %d", &expected_day, &expected_month, &expected_year);

    int fine = calculate_fine(actual_day, actual_month, actual_year, expected_day, expected_month, expected_year);
    printf("%d\n", fine);

    return 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
}

