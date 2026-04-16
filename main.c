#include "pes.h"
int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    if (strcmp(argv[1], "init") == 0)
        init_repo();
    else if (strcmp(argv[1], "add") == 0)
        add_file(argv[2]);
    else if (strcmp(argv[1], "commit") == 0)
        commit_changes(argv[2]);
    else if (strcmp(argv[1], "status") == 0)
        status();
    return 0;
}
