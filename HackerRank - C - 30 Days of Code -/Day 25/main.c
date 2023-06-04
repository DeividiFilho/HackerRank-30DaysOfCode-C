#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1)
        return false;

    int sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
      int t;
    scanf("%d", &t);

    while (t-- > 0) {
        int n;
        scanf("%d", &n);

        if (isPrime(n)) {
            printf("Prime\n");
        } else {
            printf("Not prime\n");
        }
    }

    return 0;
}

