#include "pes.h"
void init_repo() {
    mkdir(".pes", 0777);
    mkdir(".pes/objects", 0777);
    mkdir(".pes/refs", 0777);
    mkdir(".pes/refs/heads", 0777);
    FILE *head = fopen(".pes/HEAD", "w");
    fprintf(head, "ref: refs/heads/main\n");
    fclose(head);
    FILE *index = fopen(".pes/index", "w");
    fclose(index);
    printf("Initialized repository\n");
}
