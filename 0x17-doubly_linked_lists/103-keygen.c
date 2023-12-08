#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <username>\n", argv[0]);
        return 1;
    }

    char password[7], *codex;
    int len = strlen(argv[1]), i, tmp;

    codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

    /* Generate the first character of the password */
    tmp = (len ^ 59) & 63;
    password[0] = codex[tmp];

    /* Generate the second character of the password */
    tmp = 0;
    for (i = 0; i < len; i++)
        tmp += argv[1][i];
    password[1] = codex[(tmp ^ 79) & 63];

    /* Generate the third character of the password */
    tmp = 1;
    for (i = 0; i < len; i++)
        tmp *= argv[1][i];
    password[2] = codex[(tmp ^ 85) & 63];

    /* Generate the fourth character of the password */
    tmp = 0;
    for (i = 0; i < len; i++)
    {
        if (argv[1][i] > tmp)
            tmp = argv[1][i];
    }
    srand(tmp ^ 14);
    password[3] = codex[rand() & 63];

    /* Generate the fifth character of the password */
    tmp = 0;
    for (i = 0; i < len; i++)
        tmp += (argv[1][i] * argv[1][i]);
    password[4] = codex[(tmp ^ 239) & 63];

    /* Generate the sixth character of the password */
    for (i = 0; i < argv[1][0]; i++)
        tmp = rand();
    password[5] = codex[(tmp ^ 229) & 63];

    password[6] = '\0';

    /* Print the generated password */
    printf("%s", password);

    return 0;
}

