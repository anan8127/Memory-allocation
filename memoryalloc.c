#include <stdio.h>
#include <stdlib.h>

int main()
{
	//malloc

	printf("dynamic memory allocation using malloc():\n\n");
	char *ptr=(char*)malloc(20);
	*ptr ='a';
	printf("Address is\n");
	printf("%c %d\n",*ptr, ptr);
	ptr++;
	

	*ptr='b';
	printf("%c %d\n",*ptr, ptr);



	//calloc

    printf("dynamic memory allocation using calloc():\n\n");

	int *ptr1 = (int*)calloc(3,4);
	*ptr1= 5;
	printf("%d %d\n",ptr1, *ptr1);
	
	
	ptr1++;
	*ptr1 =6;
	printf("%d %d\n",ptr1, *ptr);
	return 0;
}