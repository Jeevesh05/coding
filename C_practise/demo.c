#include<stdio.h>
#include<string.h>

int main()
{
	char source[] = "GeeksForGeeks";

	// 5 bytes of source are copied to a new memory
	// allocated dynamically and pointer to copied
	// memory is returned.
	char* target = strdup(source);

	printf("%p\n", *target);
    printf("%p", &source);
	return 0;
}