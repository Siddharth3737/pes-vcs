#include "pes.h"
void add_file(const char *filename) {
    char hash[65] = {0};
    hash_file(filename, hash);
    FILE *file = fopen(filename, "r");
    char content[4096];
    fread(content, 1, sizeof(content), file);
    fclose(file);
    write_object(hash, content);
    FILE *index = fopen(INDEX_FILE, "a");
    fprintf(index, "%s %s\n", hash, filename);
    fclose(index);
    printf("Added %s\n", filename);
}
