#include <stdlib.h>
#include <stdio.h>



int main (int argc, char *argv[]){

    int x = getpid();
    if (argc != 2){
        printf("Please input an array size.\n");
        return 0;
    }

    printf("Process PID: %d\n",x);
    char* array;
    int size_of_array = atoi(argv[1]);
    array = malloc(size_of_array);

    int cur_array_idx;
    while(1)
        for (cur_array_idx = 0; cur_array_idx < size_of_array; cur_array_idx++)
        array[cur_array_idx] += 1;
}