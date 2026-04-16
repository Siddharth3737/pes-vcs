#ifndef PES_H
#define PES_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>
#include <openssl/sha.h>
#define INDEX_FILE ".pes/index"
void init_repo();
void add_file(const char *filename);
void commit_changes(const char *message);
void status();
void hash_file(const char *filename, char *output);
void write_object(const char *hash, const char *content);
#endif
