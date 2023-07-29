#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int digitFreq[10] = {0};
    int i = 0;
    char *s;

    s = malloc(1024 * sizeof(char));
    fgets(s, 1024, stdin);
    s = realloc(s, strlen(s) + 1);

    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            int index = s[i] - '0';
            digitFreq[index] = digitFreq[index] + 1;
        }
        i++;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", digitFreq[i]);
    }

    return 0;
}