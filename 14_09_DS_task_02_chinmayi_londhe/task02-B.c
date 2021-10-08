#include <stdio.h>
#include <stdlib.h>

int main()
{

	int* ptr;
	int n,m, i;
	printf("Enter number of elements: \n");
    scanf("%d",&n);

	ptr = (int*)malloc(n*sizeof(int));

	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		printf("Memory successfully allocated using malloc.\n");

		for (i = 0; i < n; ++i) {
			ptr[i] = i + 1;
		}

		printf("The elements of the array are: \n");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}

		
		printf("\n\nEnter number of elements: \n");
        scanf("%d",&m); 
		ptr = realloc(ptr, m * sizeof(int));
		printf("Memory successfully re-allocated using realloc.\n");

		for (i = 0; i < m; ++i) {
			ptr[i] = i + 1;
		}

		printf("The elements of the array are: \n");
		for (i = 0; i < m; ++i) {
			printf("%d, ", ptr[i]);
		}

		free(ptr);
	}

	return 0;
}
