#include <stdio.h>

#define MAXIMUM 1000

int main()
{
    int c, i = 0;
    char s[MAXIMUM];
    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case '\n':
            printf("\\n");
            break;
        case '\t':
            printf("\\t");
            break;
        default:
            putchar(c);
            break;
        }
        s[i] = c;
        i++;
    }
    printf("\n%s\n", s);
    return 0;
}
