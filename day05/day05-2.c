#include <stdio.h>
#include <stdlib.h>
struct Stduent {
	int score;
	char name[100];
	int snum;
};

int main()
{
	int N;
	struct Sutdent* p;



	printf("�л� �� �Է�:");
	scanf_s("%d", &N);

	p = (sturct Student*)malloc(N * sizeof(struct Student));


	for (int i = 0; i < N; i++) {
		printf("�й�: ");
		scanf_s("%d", &p[i].snum);
		printf("�̸�: ");
		scanf_s("%s", tmp, 100);
		printf("����: ");
		scanf_s("%d", &p[i].score);


	}
	for (int i = 0; i < N; i++) {
		printf("%d %s %d\n", snum[i], name[i], score[i]);
	}
	free(name);
	free(snum);
	free(score);




	return 0;
}