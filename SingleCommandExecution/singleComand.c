
#include <unistd.h>
/* This code snipped show the execution of the execlp function
 where you can find some information on
 https://www.javatpoint.com/execlp-function-in-c
  */

int main(int argc, char **argv)
{

    execlp(argv[1],argv[1],(char *) NULL);
   
}

/* TEST: 
./a.out /bin/ls 
*/