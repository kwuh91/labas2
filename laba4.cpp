#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
int mult3length;
int neglength;

void construct(int str[]) {
    srand(time(NULL));
    int neg[] = {1, -1};
    for (int i = 0; i < 50; ++i) {
        str[i] = rand() % 100 * neg[rand() % 2];
    }
}

void task(int multiple3[], int negative[], int str[], int *sum3, int *negcount) {
    int mult = 0;
    int neg = 0;
    for (int i = 0; i < 50; ++i) {
        if (str[i] % 3 == 0) {
            multiple3[mult] = str[i];
            *sum3 += str[i];
            mult++;
            mult3length++;
        }
        if (str[i] < 0) {
            negative[neg] = str[i];
            (*negcount)++;
            neg++;
            neglength++;
        }
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int str[50];
    int multiple3[50];
    int negative[50];
    int sum3 = 0;
    int negcount = 0;
    construct(str);
    printf("Entered array:\n");
    display(str, 50);
    task(multiple3, negative, str, &sum3, &negcount);
    printf("Multiples of 3:\n");
    display(multiple3, mult3length);
    printf("Negative elements:\n");
    display(negative, neglength);
    printf("sum of multiples of 3:\n");
    printf("%d\n", sum3);
    printf("Amount of negative elements:\n");
    printf("%d\n", negcount);
    return 0;
}
 */