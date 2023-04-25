#ifndef CONSOLE_H
#define CONSOLE_H

void write_console(char *str, ...); // set message color green

void callout(char *str, ...); // set message color to yellow

void throw_error(char *str, ...); // set message color to red

void clear_screen(); // clear screen

#endif