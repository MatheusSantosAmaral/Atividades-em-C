#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	int i;
    char str[100];

    printf("Digite uma palavra: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = 0;

    for (i = 0; str[i] != '\0'; i++) {
        putchar(toupper(str[i]));
    }
    printf("\n");

    for (i = 0; str[i] != '\0'; i++) {
        putchar(tolower(str[i]));
    }
    printf("\n");

    printf("%s\n", str);

    return 0;
}
