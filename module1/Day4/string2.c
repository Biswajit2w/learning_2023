#include<stdio.h>

int main() {
    char str1[100];
    scanf("%s", str1);
    int i = 0, res = 0;

    while (str1[i] != '\0') {
        res = res * 10 + (str1[i] - '0');
        i++;
    }

    printf("%d\n", res);
    return 0;
}

