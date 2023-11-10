/*
STAWP by Alexander Abraham 
a.k.a. "Angel Dollface".
Licensed under the MIT license.
*/

#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// This function gets the current
// date as a string.
const char* get_date(){
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    char *result = (char*)malloc(10 * sizeof(char));
    sprintf(result, "%d-%d-%d", tm.tm_mday, tm.tm_mon, tm.tm_year+1900);
    return result;
}

// This function gets the current
// time as a string.
const char* get_time(){
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    char *result = (char*)malloc(8 * sizeof(char));
    sprintf(result, "%d:%d:%d", tm.tm_hour, tm.tm_min, tm.tm_sec);
    return result;
}

// Stawp's tiny CLI.
void cli(int argc, char* argv[]){
    char *err_msg = "Unrecognized arguments!";
    if (argc == 2){
        if (strcmp(argv[1], "time") == 0){
            char *time = get_time();
            printf("%s\n", time);
        }
        else if (strcmp(argv[1], "date") == 0){
            char *date = get_date();
            printf("%s\n", date);
        }
        else {
            printf("%s\n", err_msg);
        }
    }
    else {
        printf("%s\n", err_msg);
    }
}

// The main point of entry for
// the C compiler.
int main(int argc, char* argv[]){
    cli(argc, argv);
    return 0;
}