#include <stdio.h>

int main() {
    char text[100];
    char plain[] = "abcdefghijklmnopqrstuvwxyz";
    char cipher[] = "CIPHERABDFGJKLMNOQSTUVWXYZ";
    int i, j;

    printf("Enter plaintext: ");
    scanf("%s", text);

    for(i = 0; text[i] != '\0'; i++) {
        for(j = 0; j < 26; j++) {
            if(text[i] == plain[j]) {
                text[i] = cipher[j];
                break;
            }
        }
    }

    printf("Encrypted Text: %s", text);
    return 0;
}