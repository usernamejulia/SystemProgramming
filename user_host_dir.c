/*************************************************************************
	> File Name: user_host_dir.c
	> Author: 
	> Mail: 
	> Created Time: 2019年04月23日 星期二 19时00分53秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv) {
    char *username;
    char *path;
    char hostname[50];
    username = getenv("LOGNAME");
    path = getenv("PWD");
    gethostname(hostname, sizeof(hostname));
    printf("\033[40;34m%s@%s\033[0m", username, hostname);
    printf("\033[40;31m:\033[0m");
    printf("\033[40;37m%s\033[0m\n", path);
    return 0;
}
