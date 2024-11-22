#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct PasswordMng {
    char password[16] ;
    void (*check)(char*);
    void (*get)(void);
};

struct PasswordMng password_manager;


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
    printf("Enter password: ");
    scanf("%s", password_manager.password);  // read the password from the user
 
    password_manager.check(password_manager.password);

}
int main() {

    password_manager.check = checkPassword;
    password_manager.get = getPassword;
    password_manager.get();
    
    return 0;
}
