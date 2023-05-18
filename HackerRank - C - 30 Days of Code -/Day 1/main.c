#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int secondInt;
    double secondDouble;
    char secondString[100];
    // Read and save an integer, double, and String to your variables.
    scanf("%d", &secondInt);
    scanf("%lf", &secondDouble);
    scanf(" %[^\n]", secondString);
    // Print the sum of both integer variables on a new line.
    printf("%d\n", i + secondInt);
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n", d + secondDouble);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s%s\n", s, secondString);

    return 0;
