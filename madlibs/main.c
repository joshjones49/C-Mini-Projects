// MADLIBS PROGAM

#include <stdio.h>
#include <string.h>

int main() {

    char noun[20] = "";
    char verb[20] = "";
    char adj1[20] = "";
    char adj2[20] = "";
    char adj3[20] = "";

    printf("Enter an adjective! (description): ");
    fgets(adj1, sizeof(adj1), stdin);
    adj1[strlen(adj1) - 1] = '\0';

    printf("Enter an animal!: ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter an adjective! (description): ");
    fgets(adj2, sizeof(adj2), stdin);
    adj2[strlen(adj2) - 1] = '\0';

    printf("Enter a verb! (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adj3, sizeof(adj3), stdin);
    adj3[strlen(adj3) - 1] = '\0';

    printf("Today I went to a %s restaurant! There was a %s looking %s at me. All of a sudden it began %s towards me!. It was a %s evening!", adj1, noun, adj2, verb, adj3);

    return 0;
}