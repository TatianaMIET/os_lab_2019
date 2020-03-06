#include "revert_string.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void RevertString(char *reverted_str)
{
	char temp;
    int count = strlen(reverted_str) + 1;
	for (int i = 1; i < count / 2 + 1; i++)
	{
		temp = reverted_str[i - 1];
		reverted_str[i - 1] = reverted_str[count - i - 1];
		reverted_str[count - i - 1] = temp;
	}
}

