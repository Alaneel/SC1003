#include <stdio.h>
#include <string.h>

struct nameTag {
    char fname[20], lname[20];
};

struct nameTag getname();

int main()
{
    struct nameTag name;
    name = getname();
    printf("Your name is %s %s\n", name.fname, name.lname);
    return 0;
}

struct nameTag getname()
{
    struct nameTag newname;
    char *p;
    printf("Enter first name: ");
    fgets(newname.fname, 20, stdin);
    if (strchr(newname.fname, '\n'))
    {
        p = strchr(newname.fname, '\n');
        *p = '\0';
    }
    printf("Enter last name: ");
    fgets(newname.lname, 20, stdin);
    if (strchr(newname.lname, '\n'))
    {
        p = strchr(newname.lname, '\n');
        *p = '\0';
    }
    return newname;
}