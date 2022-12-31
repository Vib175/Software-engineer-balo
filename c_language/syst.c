#include <stdio.h>

int main()

{

	int age = 25;
	 printf("%p\n",&age);

	 int* ptr = &age;
	 printf("%p\n",ptr);

	 printf("Value: %d\n", *ptr);
}
