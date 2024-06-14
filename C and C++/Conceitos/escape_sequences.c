#include <stdio.h>

int main(){
    /* 
    Escape sequences are characters combinations consisting of a
    backslash \ followed by a letter or a combination of digits.

    They specify actions within a line or string of text.

    \n = newline
    \t = tab (equally espaced sequences)
    \" or \' or \\ = displays quotes, single quotes or backslashes
    */

   printf("My\nname\nis\nBruno\n\n");
   printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n\n");
   printf("\"I'm Demacia.\" - Abraham Lincoln probably");
   return 0;
}
