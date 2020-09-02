#include <stdio.h>
#include <string.h>

// repeatedly output str until there is a error; then fail
#define NO(str) {           \
	while(puts(str) != EOF) \
	 	continue;           \
	return 1;               \
}

int main(int argc, char **argv) {
	// no string specified
	if(argc == 1)
		NO("n");
	
	// static malloc for line (specified string)
	size_t len = 0;
	for(size_t i = 1; i < argc; i++)
		len += strlen(argv[i]) + 1;
	char line[--len];
	
	// copy argv[1]..argv[argc-1] to line
	for(size_t i = 1; i < argc; i++) {
		strcat(line, argv[i]);
		strcat(line, " ");
	}
	line[len] = 0;
	
	NO(line);
}

