#include <stdio.h>

int main(int argc, char *argv[]) {
    
    // argv[0] gives the directory, so we can ignore it
    for (int i = 1; i < argc; i++) {
        printf("%s ", argv[i]);
    }
    return 0;
}
