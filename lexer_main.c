
// C includes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Professor Includes
#include "lexer.h"
#include "ast.h"
#include "machine_types.h"
#include "spl.tab.h"
#include "utilities.h"
#include "file_location.h"


int main(int argc, char const* argv[])
{

	// Check if valid number of tokens
	if (argc != 2)
	{
		bail_with_error("Invalid number of arguments, %d provided\n", argc - 1);
	}

	// Check if valid file extension
	char* valid_extension = ".spl";
	int len = strlen(argv[1]);
	for (int i = 0; i < 4; i++)
	{
		if (argv[1][len - 4 + i] != valid_extension[i])
		{
			bail_with_error("Invalid file extension\n");
		}
	}

	// open file
	lexer_init(argv[1]);


	lexer_output();


	//printf("hello world!\n");

	return 0;
}
