#include <stdio.h>
#include <string.h>

typedef struct {
    char source;
    char code;
} Rule;

void createTable(Rule *table, int *size);
void printTable(Rule *table, int size);
void encodeChar(Rule *table, int size, char *s, char *t);

int main()
{
    char s[80], t[80], dummy, *p;
    int size, choice;
    Rule table[100];

    createTable(table, &size);
    printf("printTable(): \n");
    printTable(table, size);
    scanf("%c", &dummy);
    printf("Enter source string: \n");
    fgets(s, 80, stdin);
    if (strchr(s, '\n'))
    {
        p = strchr(s, '\n');
        *p = '\0';
    }
    encodeChar(table, size, s, t);
    printf("Encoded string: %s\n", t);
    return 0;
}

void createTable(Rule *table, int *size)
{
    char dummy;
    int i;

    printf("Enter number of rules: \n");
    scanf("%d", size);
    for (i=0; i<*size; i++)
    {
        scanf("%c", &dummy);
        printf("Enter rule %d: \n", i+1);
        printf("Enter source character: \n");
        scanf("%c", &(table+i)->source);
        scanf("%c", &dummy);
        printf("Enter code character: \n");
        scanf("%c", &(table+i)->code);
    }
}

void printTable(Rule *table, int size)
{
    int i;
    
    for (i=0; i<size; i++)
    {
        printf("%d: %c->%c\n", i, (table+i)->source, (table+i)->code);
    }
}

void encodeChar(Rule *table, int size, char *s, char *t)
{
    int i, j;
    char *p;

    strcpy(t, s);
    for (i=0; i<size; i++)
    {
        for (j=0; s[j]!='\0'; j++)
        {
            if (s[j] == (table+i)->source)
                t[j] = (table+i)->code;
        }
    }
}