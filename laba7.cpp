#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
/*
void construct(char str[80]) {
    srand(time(NULL));
    while (strlen(str) < 50) {
        char temp_str[30] = "";
        for (size_t i = 0; i < rand() % 20 + 1; ++i) {
            temp_str[i] += "rqrwrertyuiopasdfghjklzxcrvrbrnrmr"[(rand() % 26)];
        }
        strcat(str, temp_str);
        memset(temp_str, 0, strlen(temp_str));
        char comma = ',';
        strncat(temp_str, &comma, 1);
        strcat(str, temp_str);
    }
    str[strlen(str) - 1] = '.';
}

void task(char str[80]) {
    char temp_str[80] = "";
    int count = 0;
    int count_all = 0;
    for (size_t i = 0; i < strlen(str); ++i) {
        if ((str[i] == 'r' && i == 0 )|| (str[i] == 'r' && str[i-1] == ',')) {
            while (str[i] != ',' && str[i] != '.') {
                strncat(temp_str, &str[i], 1);
                ++count;
                ++i;
            }
            if (count % 2 == 0) {
                printf("word = %s, len = %d\n",temp_str,count);
                ++count_all;
            }
            memset(temp_str, 0, strlen(temp_str));
            count = 0;
        }
    }
    if (count_all == 1) {
        printf("In total there is %d even word, that begins with r\n", count_all);
    } else if (count_all == 0)  {
        printf("In total there are no even words, that begin with r\n");
    } else {
        printf("In total there are %d even words, that begin with r\n", count_all);
    };
}

int main() {
    char str[80] = "";
    construct(str);
    printf("Finding words with even amount of characters, that begin with the character 'r'\n");
    printf("Entered str:\n");
    printf("%s\n", str);
    task(str);
    return 0;
}
*/