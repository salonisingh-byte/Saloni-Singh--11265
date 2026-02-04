#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];

    // strlen()
    printf("Length of str1 = %lu\n", strlen(str1));

    // strcpy()
    strcpy(str3, str1);
    printf("After strcpy, str3 = %s\n", str3);

    // strcat()
    strcat(str1, str2);
    printf("After strcat, str1 = %s\n", str1);

    // strcmp()
    if (strcmp(str2, str3) == 0)
        printf("str2 and str3 are equal\n");
    else
        printf("str2 and str3 are not equal\n");

    return 0;
}
