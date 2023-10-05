#include <stdio.h>
#include <stdlib.h>

char* create_array(unsigned int size, char c)
{
if (size <= 0)
{
return NULL;
}

char *arr = (char *)malloc(size * sizeof(char));

if (arr != NULL)
{
for (int i = 0; i < size; i++)
{
arr[i] = c;
}
}

return arr;
}