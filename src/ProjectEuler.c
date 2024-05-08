/**
 *  @author Zachary Waldorn
 *  @file   ProjectEuler.c
 *  @copyright 2024 (c) Zachary Waldron
 *  @li GLP-v3.0
 *  THIS IS OPEN SOURCE SOFTWARE AND IS PROVIDED AS-IS
 *  THE MAINTAINER IS NOT RESPONSIBLE FOR THE USE OF
 *  THIS CODE.
 */
#include    "ProjectEuler.h"

int main(int argc, char **argv) {
    // If no command line arg is provided jump to command
    // loop.
    if (argc != 1) {
        // TODO: Implement processing of CLI arguments
    } else {
        process_commands(argv);
    }
    // No error
    return 0;
}

// Command processing loop
void process_commands(char **tkns) {

}