#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char* forest)
{
	int i = 0 , F_tree = 0;
	for (i = 0; forest[i] != '\0'; i++) {
		if (forest[i] == 'F')
			F_tree++;
	}
	return F_tree;
}