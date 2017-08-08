//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.3 on page 202
//  The strncat() function

#include <string.h>
#include <malloc.h>
#include <iostream>
using namespace std;
char *Strncat (char *, const char *, size_t);

int
main ()
{
  const char *s = "ABCDEFG";
  char* ss = (char *)malloc(sizeof(char)*20);
  strcpy (ss ,"ZZZZZZZZZZ");
  cout << " s = [" << s << "], ss = [" << ss << "]\n";
  Strncat (ss, s, 2);
  cout << " s = [" << s << "], ss = [" << ss << "]\n";
}
 
char* Strncat (char *s1, const char *s2, size_t n)
 {
     char *s = s1;
     /* Loop over the data in s1.  */
     while (*s != '\0')
         s++;
     /* s now points to s1's trailing null character, now copy
        up to n bytes from s1 into s stopping if a null character
        is encountered in s2.
        It is not safe to use strncpy here since it copies EXACTLY n
        characters, NULL padding if necessary.  */
     while (n != 0 && (*s = *s2++) != '\0') {
         n--;
         s++;
     }
     if (*s != '\0')
         *s = '\0';
     return s1;
 }
