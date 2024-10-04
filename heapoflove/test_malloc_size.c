#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>  // For malloc_usable_size()

int main() {
    // Allocate memory using strdup
    char *str = strdup("ab");  // Duplicating "abc" (4 bytes)
    
    // Check the actual size of the allocated memory
    size_t usable_size = malloc_usable_size(str);
    
    printf("Requested size: 3 bytes (for 'ab' + null terminator)\n");
    printf("Actual allocated size: %zu bytes\n", usable_size);
    // Actual allocated size: 24 bytes (on my system) c220g5
    // Free the allocated memory
    free(str);

    return 0;
}
