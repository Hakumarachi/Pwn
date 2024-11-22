#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char passwd[16] = "";  // array to store the username
    char password[16] = ""; // array to store the password

    FILE *fp = fopen(".passwd", "r");
    fread(passwd, 1, 15, fp);
    fclose(fp);
    passwd[15] = '\0';

    printf("Enter the password: ");
    scanf("%s", password);  // read the password from the user

    if (strcmp(password, passwd) == 0) {
        printf("good job\n");
    } else {
        printf("permission denied\n");
    }

    return 0;
}
