#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 4096

int main(int argc, char* argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <source_file> <destination_file>\n", argv[0]);
        return -1;
    }

    FILE* src = fopen(argv[1], "rb");

    if (src == NULL) {
        perror("fopen source_file");
        return -1;
    }

    FILE* dst = fopen(argv[2], "wb");

    if (dst == NULL) {
        perror("fopen destination_file");

        fclose(src);

        return -1;
    }

    char buf[BUFFER_SIZE] = {0};
    int bytes = 0;

    while (1) {
        bytes = fread(buf, 1, BUFFER_SIZE, src);

        if (bytes <= 0) {
            break;
        }

        int len = fwrite(buf, 1, bytes, dst);

        if (len != bytes) {
            perror("fwrite");
            break;
        }
    }

    fclose(src);
    fclose(dst);

    return 0;
}