#include "pes.h"

void hash_file(const char *filename, char *output) {
    FILE *file = fopen(filename, "rb");

    if (!file) {
        printf("Error opening file\n");
        return;
    }

    SHA256_CTX sha256;
    SHA256_Init(&sha256);

    char buffer[1024];
    size_t bytes;

    while ((bytes = fread(buffer, 1, sizeof(buffer), file)) > 0) {
        SHA256_Update(&sha256, buffer, bytes);
    }

    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_Final(hash, &sha256);

    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        sprintf(output + (i * 2), "%02x", hash[i]);
    }

    output[64] = '\0';

    fclose(file);
}
