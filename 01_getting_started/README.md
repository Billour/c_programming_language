# c_programming_language

Compile using GCC  
GCC (GNU Compiler Collection) is a widely used C compiler. To use it, open a terminal, use the  
command line to navigate to the source file's location and then run:  
'''  
gcc hello.c -o hello  
'''  
If no errors are found in the the source code ( hello.c ), the compiler will create a binary file,  
 the name of which is given by the argument to the -o command line option ( hello ).   
This is the final executable file.  
  
#Executing the program  
Once compiled, the binary file may then be executed by typing ./hello in the terminal.  
Upon execution, the compiled program will print Hello, World, followed by a newline, to  
the command prompt.    
'''  
./hello  
  '''  
-------------  

We can also use the warning options -Wall -Wextra -Werror , that help to identify problems   
that can cause the program to fail or produce unexpected results.   

They are not necessary for this simple program but this is way of adding them:  
'''  
gcc -Wall -Wextra -Werror -o hello hello.c
'''  
