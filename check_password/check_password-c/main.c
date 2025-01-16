#include <stdio.h>
#include <string.h>

/*program is working but the result is not good*/

int main() {
    char password[] = "hadlecat123!";
    char user_password[] = "";

    printf("enter password : ");
    scanf("%s", user_password);
    
    printf("value is : %s\n", user_password);
    if (strcmp(password, user_password)) {
        printf("OK OK\n");
    } else {
        printf("Not ok\n");
    }
    return 0;
}