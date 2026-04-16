#include "pes.h"
void commit_changes(const char *message) {
    FILE *index = fopen(INDEX_FILE, "r");
    char content[8192] = "";
    char line[256];
    while (fgets(line, sizeof(line), index))
        strcat(content, line);
    fclose(index);
    char commit_hash[65] = {0};
    FILE *temp = fopen("temp.txt", "w");
    fprintf(temp, "%s\n%s", message, content);
    fclose(temp);
    hash_file("temp.txt", commit_hash);
    FILE *temp_read = fopen("temp.txt", "r");
    char final_content[8192];
    fread(final_content, 1, sizeof(final_content), temp_read);
    fclose(temp_read);
    write_object(commit_hash, final_content);
    remove("temp.txt");
    printf("Committed: %s\n", commit_hash);
}
