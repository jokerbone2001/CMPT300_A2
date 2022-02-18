#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h>

#define MAX_USER_INPUT_SIZE 1024
#define MAX_ENV_INPUT_SIZE 1024

typedef struct
{
    char *name;
    char *value;
    int size;
    int index;
} EnvVar;
typedef struct
{
    char *name;
    struct tm *time;
    char *value;
} Command;