#include "kernel/types.h"
#include "user/user.h"

void clear_screen() {
    // ANSI escape code to clear the screen and move the cursor to the top left corner
    printf("\x1b[2J\x1b[H");
}

int main(int argc, char *argv[]) {
    clear_screen();
    exit(0);
}
