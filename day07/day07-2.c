#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
	long long int iteration = 1000000000;
	long long int ban = 10000000;
	long long int circle = 0;
	double x, y,won,progress;
	int block,j;

	srand(time(NULL));
	for (int i = 1; i <= iteration; i++) {
		x = (double)rand() / RAND_MAX;
		y = (double)rand() / RAND_MAX;
		if (x * x + y * y <= 1) {
			circle++;
		}
		if (i % ban == 0) {
			won = 4.0 * (double)circle / (double)i;
			progress = (double)i / (double)iteration * 100;
			block = (int)(progress / 10);

			printf("%.0f%% 진행 -- 원주율 : %f ", progress, won);

			for (int j = 0; j < 10; j++) {
				if (j < block) {
					printf("■");
				}
				else
					printf("□");
			}
			printf("\n");
		}
		
		
	}
	
	won = 4.0 * (double)circle / (double)iteration;
	printf("원주율 : %f\n", won);
	return 0;
}