#include "revert_string.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void RevertString(char *str)
{
	char *reverted_str = malloc(sizeof(char) * (strlen(str) + 1));
	
    for (int i = 0; i < strlen(str); i++)
    {
        reverted_str[i] = str[strlen(str) - i];
    }
    
    strcpy(str, reverted_str);
    free(reverted_str); 
}

