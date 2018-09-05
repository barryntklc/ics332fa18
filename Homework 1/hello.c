/* hello.c: print "hello world" and the current time */

#include <stdio.h>
#include <time.h>

int main (int argc, char ** argv) /* the arguments are not used */
{
  time_t now = time (NULL);
  printf ("hello world! the time is now %s", ctime (&now));
}
