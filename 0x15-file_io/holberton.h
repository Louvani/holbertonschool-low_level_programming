#ifndef HOLB_H
#define HOLB_H

/*Libraries*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <sys/types.h>/*open*/
#include <sys/stat.h>/*open*/
#include <fcntl.h> /*open*/
#include <unistd.h>/*write, read and close*/

/*Main Prototypes*/
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


/*Aux prototypes*/


#endif
