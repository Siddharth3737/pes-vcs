#include "pes.h"
void status() {
    FILE *index = fopen(INDEX_FILE, "r");
    char line[256];
    printf("Staged files:\n");
    while (fgets(line, sizeof(line), index))
        printf("%s", line);
    fclose(index);
}
