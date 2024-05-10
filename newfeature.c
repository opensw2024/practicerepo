#include <stdio.h>
#include <unistd.h>

void main()
{
    char pwd[1024];
    getcwd(pwd, sizeof(pwd));
    printf("%s\n",pwd);
}

