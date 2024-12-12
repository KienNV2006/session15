#include <stdio.h>
#include <string.h>

void deleteCharacter(char str[], char text);

int main() {
    char str[100], text;
    printf("Moi ban nhap vao chuoi: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("\nMoi ban nhap vao ky tu muon xoa: ");
    text = getchar();
    while (getchar() != '\n');
    deleteCharacter(str, text);
    printf("Chuoi sau khi xoa: %s\n", str);

    return 0;
}

void deleteCharacter(char str[], char text) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != text) {
            str[j++] = str[i]; 
        }
    }
    str[j] = '\0';
}
