#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
int p;

void construct(char arr[10][10]) {
    srand(time(NULL));
    printf("Enter p <= 10, the size of a matrix (p*p):\n");
    scanf("%d", &p);
    if (p > 10) {
        printf("p > 10\n");
        exit(0);
    }
    if (p < 0){
        printf("p < 0\n");
        exit(0);
    }
    for (size_t i = 0; i < p; ++i) {
        for (size_t j = 0; j < p; ++j) {
            arr[i][j] = "&%"[rand() % 2];
        }
    }
}

void display_task(char arr[10][10]) {
    printf("Entered matrix:                   Amount of '&' symbols:\n");
    for (size_t i = 0; i < p; ++i) {
        int count = 0;
        char spaces[30] = "";
        for (size_t j = 0; j < p; ++j) {
            if (arr[i][j] == '&') {
                ++count;
            }
            printf("%c ", arr[i][j]);
        }
        for (size_t k = 0; k < 20 - p * 2; ++k) {
            spaces[k] += ' ';
        }
        printf("%s              %d", spaces, count);
        printf("\n");
    }
}

int main() {
    char arr[10][10];
    construct(arr);
    display_task(arr);
    return 0;
}
*/