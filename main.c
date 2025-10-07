#include <stdio.h>
#include <string.h>

int main() {
    char desc1[50];
    char noun[100];
    char desc2[50];
    char verb[50];
    printf("Enter an adjective (place)");
    fgets(desc1,sizeof(desc1),stdin);
    desc1[strlen(desc1)-1]='\0';

    printf("Enter a noun");
    fgets(noun,sizeof(noun),stdin);
    noun[strlen(noun)-1]='\0';

    printf("Enter an adjective again");
    fgets(desc2,sizeof(desc2),stdin);
    desc2[strcspn(desc2,"\n")]='\0';

    printf("Enter a verb (endinf w/ -ing)");
    fgets(verb,sizeof(verb),stdin);
    verb[strcspn(verb,"\n")]= '\0';

    printf("I went to the %s, and met a guy. His name was %s. \n",desc1,noun);
    printf("He was %s and %s!\n",desc2,verb);
    return 0;
}