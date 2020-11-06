#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>





char** str_to_2d_array (char *string, int tree_size) {

    char** table_arr = (char**)malloc( (tree_size) * sizeof(char*));
	char* data = 

	printf("string - %s\n", string);
	for (int i = 0; i < tree_size; i++)
	{
		for (int j = 0; j < tree_size; j++)
		{
			arr[i][j] = string[tree_size * i + j]; //Initialized the forset according to the format. arr[i] is the i row, columns are the j
		}
		arr[i][tree_size] = '/0';
	}
	return arr;
}



//argc - number of argument passed, argv - the array contains the arguments. 
//argv[0] - the name of the programs itself.
int main(int argc, char* argv[])
{
	int tree_size = strlen(argv[1]);
	if (!sqrt(tree_size) == ceil(sqrt(tree_size))) {
		printf("The woods is not a square");
	}
	tree_size = sqrt(tree_size);
	printf("tree size - %d", tree_size);
	char** forest_array = str_to_2d_array(argv[1], tree_size);
	for (int i = 0; i <tree_size; i++) {
		printf("line = %s \n", forest_array[i]);
		free(forest_array[i]);
	}
}