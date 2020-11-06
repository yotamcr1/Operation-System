#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


//argc - number of argument passed, argv - the array contains the arguments. 
//argv[0] - the name of the programs itself.
int main(int argc, char* argv[])
{
	int tree_size = strlen(argv[1]);
	if (!sqrt(tree_size) == ceil(sqrt(tree_size))) {
		printf("The woods is not a square");
	}

}


char** str_to_2d_array(char* str, int tree_size) {

    char** arr = (char**)malloc(tree_size * sizeof(char*));
	if (NULL == arr) {
		pritnf("Allocate memory failed");
		//TBD: needs to finish the program
	}
	for (int i = 0; i < tree_size; i++) {
		arr[i] = (char*)malloc(tree_size * sizeof(char));
		if (NULL == arr[i]) {
			pritnf("Allocate memory failed");
			//TBD: needs to finish the program
		}
	}

	for (int i = 0; i < tree_size; i++)
	{
		for (int j = 0; j < tree_size; j++)
		{
			arr[i][j] = str[tree_size * i + j]; //Initialized the forset according to the format. arr[i] is the i row, columns are the j
		}
	}
	return arr;
}