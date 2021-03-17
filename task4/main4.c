#include <sys/procfs.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char** argv, char** envp){

    pid_t subPid;
    int count_P;
    int count_i;
    int i, j;
    FILE* handle;

    if(argc < 4){
        perror("Error\n");
        return 1;
    }

    count_P = atoi(argv[2]);
    count_i = atoi(argv[3]);

    handle = fopen("FILE", "a+");
    if(!handle){ perror("Error open FILE\n");
        return 1;
    }

    for(i = 0; i < count_P; ++i){ subPid = fork();
	if(subPid == 0){
    for(j = 0; j < count_i; ++j){
        sleep(count_i * j);
        lockf((int)handle, F_LOCK, 0);
        fprintf(handle, "%s, %d\n", argv[1], j * i);
            }
        }}
    if(subPid != 0){ pid_t p;
        int status;
        p = waitpid(-1, &status, 0);
    }

    return 0;
} 