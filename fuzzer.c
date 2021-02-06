#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *buf = malloc(sizeof(char) * 3);

	for (;;) {
		system("cat /dev/urandom|./lost_in_your_eyes");
		if (strcmp(":(", fgets(buf, 3, stdout))) {
			free(buf);
			break;
		}
	}
	return 0;
}
	
