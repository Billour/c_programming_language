# C programming language  

  
##Keywords in C Programming  
		A list of 32 keywords in the C language is given below:  
    
|   |   |    |   |    |   |    |   |    
| ------------- | ------------- | ------------- | ------------- | ------------- | ------------- | ------------- | ------------- |
|auto	    |break    |	case      |	char      |	const         |	continue|	default    |	do|  
|double| 	else     | 	enum   | 	extern|	float            |	for           |	goto         |	if|    
|int         |	long    |	register|	return  |	short          |	signed   |	sizeof      |	static|   
|struct   |	switch|	typedef|	union  |	unsigned|	void          |	volatile   |	while|  



-----------  
#C Datatype Value Range

In the table below we have the range for different data types in the C language.
|Type  |   Typical Size in Bits  |   Minimal Range  |   Format Specifier  |
| ------------- | ------------- | ------------- | ------------- |
|char  |8  | -127 to 127  |   %c  |   
|unsigned char  | 	8 	  |0 to 255 	  |%c  |
|signed char  | 	8 	  |-127 to 127 	  |%c  |
|int  | 	16 or 32 	  |-32,767 to 32,767 	  |%d, %i  |
|unsigned int  | 	16 or 32 	  |0 to 65,535 	  |%u  |
|signed int  | 	16 or 32 	  |Same as int 	  |%d, %i  |
|short int  | 	16 	  |-32,767 to 32,767 	  |%hd  |
|unsigned short int  | 	16 	  |0 to 65,535 	  |%hu  |
|signed short int  | 	16 	  |Same as short int 	  |%hd  |
|long int  | 	32 	  |-2,147,483,647 to 2,147,483,647 	  |%ld, %li  |
|long long int  | 	64 	  |-(263 - 1) to 263 - 1 (Added by C99 standard) 	  |%lld, %lli  |
|signed long int  | 	32 	  |Same as long int 	  |%ld, %li  |
|unsigned long int  | 	32 	  |0 to 4,294,967,295 	  |%lu  |
|unsigned long long int  | 	64 	  |264 - 1 (Added by C99 standard) 	  |%llu  |
|float 	  |32 	  |1E-37 to 1E+37 with six digits of precision 	  |%f  |
|double  | 	64 	  |1E-37 to 1E+37 with ten digits of precision 	  |%lf  |
|long double  | 	80 	  |1E-37 to 1E+37 with ten digits of precision 	  |%Lf  |

As you can see in the table above, with different combinations of the datatype and modifiers the range of value changes.


