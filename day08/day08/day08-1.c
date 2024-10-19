#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    int len = 0;

    printf("�Է� : ");
    scanf_s("%s", str, sizeof(str));
    len = strlen(str);

    char* start = str;
    char* last = str + len - 1;

    while (start < last) {
        char temp = *start;
        *start = *last;
        *last = temp;
        start++;
        last--;
    }

    printf("��� : %s\n", str);

    return 0;
}
