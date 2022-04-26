#include "main.h"
/**
 * @brief 
 * 
 */
char *_strncpy(char *dest, char *src, int n)
{
unsigned int i;

while (i < n)
{
    i++;
    dest[i] = src [i];
}
return(dest);

}