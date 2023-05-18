#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        char s[10000];
        scanf("%s", s);

        // Print even-indexed characters
        for (int j = 0; j < strlen(s); j += 2) {
            printf("%c", s[j]);
        }
        printf(" ");

        // Print odd-indexed characters
        for (int j = 1; j < strlen(s); j += 2) {
            printf("%c", s[j]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}

