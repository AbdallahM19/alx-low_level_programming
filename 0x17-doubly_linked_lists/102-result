#include <stdio.h>
int check_palindrome(int n) {
    int number = n, revers = 0;
    while (n > 0) {
        revers = revers * 10 + n % 10;
        n /= 10;
    }
    return (number == revers);
}
int main() {
    int largest_pal = 0;
    for (int i = 100; i < 1000; ++i) 
    {
        for (int j = 100; j < 1000; ++j) 
        {
            int product = i * j;
            if (check_palindrome(product) && product > largest_pal) 
                largest_pal = product;
        }
    }
    FILE *file = fopen("102-result", "w");
    if (file != NULL) {
        fprintf(file, "%d", largest_pal);
        fclose(file);
    }
    return (0);
}
