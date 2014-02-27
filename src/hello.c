#include "stdio.h"
#include "math.h"

int main() {
	printf("Hello\n");
        printf("II\n");
	printf("World\n");
	goto fail;
	goto fail;
fail:
	printf("fail\n");
}
