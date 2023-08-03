#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
/*
void construct(char str[200]) {
    srand(time(NULL));
    while (strlen(str) < 140) {
        char temp_str[30] = "";
        for (size_t i = 0; i < rand() % 29 + 1; ++i) {
            temp_str[i] += 'a' + (rand() % 26);
        }
        strcat(str, temp_str);
        memset(temp_str, 0, strlen(temp_str));
        for (size_t i = 0; i < rand() % 29 + 1; ++i) {
            temp_str[i] += '*';
        }
        strcat(str, temp_str);
    }
}

void first_star(char str[200]) {
    for (size_t i = 0; i < strlen(str); ++i) {
        if (str[i] == '*') {
            printf("First time '*' is met at position %llu\n", i + 1);
            return;
        }
    }
}

void longest_star(char str[200]) {
    size_t pos;
    size_t max_pos;
    int maxim = 0;
    int count = 0;
    for (size_t i = 0; i < strlen(str); ++i) {
        if (str[i] == '*') {
            if (count == 0) {
                pos = i + 1;
            }
            ++count;
        } else {
            if (count > maxim) {
                max_pos = pos;
                maxim = count;
            }
            count = 0;
        }
    }
    if (count > maxim) {
        max_pos = pos;
        maxim = count;
    }
    if (maxim != 0){
        printf("Longest string of '*' elements begins at position %llu\n", max_pos);
        printf("Its length is %d\n", maxim);
    } else {
        printf("There are no '*' elements\n");
    }
}

int main() {
    char str[200] = "*********vkjiquk*******jlkzrfpbo**uqhoy*********eaa******qyrfohetam********z******bftjzlg****pmnas****xpxczuxs*****svxbi****ldb**afy*********\n";
    //construct(str);
    printf("Entered string:\n%s\n\n", str);
    first_star(str);
    longest_star(str);
    return 0;
}
*/