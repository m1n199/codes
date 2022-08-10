// C program for reading
// struct from a file
#include <stdio.h>
#include <stdlib.h>

// struct person with 3 fields
typedef struct Emp
{
	int id;
	char fname[20];
	char lname[20];
}EMP;

// Driver program
int main ()
{
	FILE *infile;
	EMP input;

	// Open person.dat for reading
	infile = fopen ("a1.dat", "r");
	if (infile == NULL)
	{
		fprintf(stderr, "\nError opening file\n");
		exit (1);
	}k

	// read file contents till end of file
	while(fread(&input, sizeof(EMP), 1, infile))
		printf ("id = %d name = %s %s\n", input.id,
		input.fname, input.lname);

	// close file
	fclose (infile);

	return 0;
}
