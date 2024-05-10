#include <stdio.h>
#include <unistd.h>

void main()
{
    // need to print current working dir.
    char pwd[1024];
    FILE *f = fopen("pwd-log.log", 'w');
    getcwd(pwd, sizeof(pwd));
    printf("print working dir: %s\n",pwd);
    fputs("%s\n",f);
    fclose(f);
}

