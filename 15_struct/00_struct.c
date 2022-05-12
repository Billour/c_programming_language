#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *Student's vehicle
 *
 *Author :Billour Ou
 *Date: 20220512
 *version: 01
 * */

/*
 * The name s_vehicle, the pre char 's_' it mean 'struct'.
 * */
struct s_vehicle
{
	char brand[20];
	char color[20];
	char nickname[20];
};


struct student
{
	char name[18];/*Student's name   */
	char gender;  /*Student's gender */
	int  age;     /*Student's age    */
	char id[8];   /*ID number        */
	struct s_vehicle vehicle;
	/*We use the struct 's_vehicle' to build a new detail of information for vehicle. */
};

int main(void)
{
	struct student stud1;/* Create a entity 'stud1' */
	strcpy(stud1.name, "Jenny Wood");/*Setting name of stud1*/
	stud1.gender = 'F';
	stud1.age = 18;
	strcpy(stud1.id, "A9991");

	/*Setting vehicle information*/
        strcpy(	stud1.vehicle.brand, "Ford" );
	strcpy( stud1.vehicle.color, "yello");
	strcpy( stud1.vehicle.nickname, "Big yello");

	/* Start of output */
	printf("Name: %s \n", stud1.name );
	printf("Gender: %c \n", stud1.gender );
	printf("Age: %d \n", stud1.age );
	printf("ID: %s \n\n", stud1.id );
	

	printf("Brand:  %s \n", stud1.vehicle.brand );
	printf("Color: %s \n", stud1.vehicle.color );
	printf("Nickname: %s \n", stud1.vehicle.nickname );
	/* End of output  */

	system("pause");
	return 0;
}
