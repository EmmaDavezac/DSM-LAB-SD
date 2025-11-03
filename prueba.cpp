#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE (100 * 1024 * 1024)
int main() {
clock_t start, end;
int *array = malloc(SIZE * sizeof(int));
start = clock();
for (long i = 0; i < SIZE; i++) array[i]++;
end = clock();
printf("Tiempo: %.2f segundos\n", (double)(end - start) /
CLOCKS_PER_SEC);
free(array);
return 0;
}