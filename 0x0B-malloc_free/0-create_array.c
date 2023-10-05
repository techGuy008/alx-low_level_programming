#include <stdio.h>

char *create_array(unsigned int size, char c)
{
if (size <= 0)
{
return NULL;
}
char arr[1000];
for (int i = 0; i < size; i++) {
arr[i] = c;
}

return arr;
}