#include <stdio.h>

int main(int argc, char *argv[]) {
	int areas[] = {10, 12, 13, 14, 20};
	char name[] = "Zed";
	char full_name[] = {
		'Z', 'e', 'd', ' ', 'A', '.'
	};

	printf("The number of chars: %ld\n", sizeof(full_name)/sizeof(char));

	return 0;

};

