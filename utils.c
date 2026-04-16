#include "pes.h"
void write_object(const char *hash, const char *content) {
    char path[256];
    sprintf(path, ".pes/objects/%s", hash);
    FILE *file = fopen(path, "w");
    fprintf(file, "%s", content);
    fclose(file);
}
