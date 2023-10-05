#include <stdio.h>
#include <stdlib.h>

char* create_array(unsigned int size, char c)
{
if (size <= 0)
{
return NULL;
}
static char arr[1000];
for (int i = 0; i < size; i++) {
arr[i] = c;
}

return arr;
}