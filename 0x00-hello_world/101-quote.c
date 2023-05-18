#include <unistd.h>
/**
 * main - entry point
 * Return:returns 1
 */
int main() {
    const char* message = "Hello, world!\n";
    const int messageLength = 14;  // Length of the message

    write(1, message, messageLength);  // Write to standard output

    return 0;
}
