## C-Makefiles

 ### 0-Makefile:
 
     Makefile with 'all' rule to buid an executable
     
 ### 1-Makefile:
 
    Makefile with 'all' rule to build an executable and variables 'CC' to store compiler and 'SRC' for or .c files
    
  ### 2-Makefile:
  
    Makefile with 'all' rule to create an executable and variables 'CC' for the compiler, 'SRC' for .c files 'OBJ' for .o files and 'NAME' name of the executable
    
  ### 3-Makefile - a Makefile with the following rules:
  
    
    all: builds your executable
    clean: deletes all Emacs and Vim temporary files along with the executable
    oclean: deletes the object files
    fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
    re: forces recompilation of all source files

  ### 4-Makefile A complete Makefile:
  
    rules: all, clean, fclean, oclean, re

    all: builds your executable
    clean: deletes all Emacs and Vim temporary files along with the executable
    oclean: deletes the object files
    fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
    re: forces recompilation of all source files

  ### 100-Makefile:
  
    name of the executable: school
    rules: all, clean, fclean, oclean, re

    all: builds your executable
    clean: deletes all Emacs and Vim temporary files along with the executable
    oclean: deletes the object files
    fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
    re: forces recompilation of all source files

    variables: CC, SRC, OBJ, NAME, RM, CFLAGS

    CC: the compiler to be used
    SRC: the .c files
    OBJ: the .o files
    NAME: the name of the executable
    RM: the program to delete files
    CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic


    
    
   
