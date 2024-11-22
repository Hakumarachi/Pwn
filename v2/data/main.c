#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printSecret(void) {
    printf("Good job !\n");
}

void checkPassword(char *password) {
    char passwd[16] = "";  // array to store the password

    FILE *fp = fopen(".passwd", "r");
    fread(passwd, 1, 15, fp);
    fclose(fp);
    passwd[15] = '\0';

    if (strcmp(password, passwd) == 0) {
        printSecret();
    } else {
        printf("Permission denied !\n");
    }
}

void getPassword(void) {
    char password[16] = "";

    printf("Enter password: ");
    scanf("%s", password);  // read the password from the user
 
    checkPassword(password);

}

int main() {

    getPassword();
    
    return 0;
}
