while(fread(&input, sizeof(EMP), 1, infile))
  printf ("id = %d name = %s %s\n", input.id,
  input.fname, input.lname);
