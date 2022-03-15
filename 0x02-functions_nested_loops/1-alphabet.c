#include "main.h"

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet(void)
{
  for(int x = 'A'; x <= 'Z'; x++)
  {
    int lower_x = tolower(x);
    _putchar(lower_x);
    _putchar (‘\n’) ;
  }
}
