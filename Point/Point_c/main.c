#include <string.h>
#include <stdio.h> /* for printf */

void tst_strtok (void) {
  char *tok;

  tok = strtok ("This is a string of text", " \t\n");

  while (tok != NULL) {
    printf ("Token: %s\n", tok);
    tok = strtok (NULL, " \t\n");
  }
}
