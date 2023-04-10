#include <stdio.h>

#include <stdlib.h>
int main()
{
	int* ptr;
	int n, i;
	scanf("%d",&n);
	ptr = (int*)malloc(n * sizeof(int));
	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		for (i = 0; i < n; i++) {
			scanf("%d",&ptr[i]);
		}
		printf("The elements are: ");
		for (i = 0; i < n; i++) {
			printf("%d ", ptr[i]);
		}
	}
	return 0;
}
