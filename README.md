# PES-VCS (Mini Version Control System)

A simplified version of Git implemented in C using SHA-256 hashing.

## Features
- Initialize repository (init)
- Add files (add)
- Commit changes (commit)
- View status (status)

## Concepts Used
- Content Addressable Storage
- SHA-256 Hashing
- File System Handling

## How to Run
```bash
gcc main.c init.c add.c commit.c status.c hash.c utils.c -o pes -lcrypto
./pes init
./pes add test.txt
./pes commit "message"
./pes status
