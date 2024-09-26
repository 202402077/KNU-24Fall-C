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



	printf("학생 수 입력:");
	scanf_s("%d", &N);

	p = (sturct Student*)malloc(N * sizeof(struct Student));


	for (int i = 0; i < N; i++) {
		printf("학번: ");
		scanf_s("%d", &p[i].snum);
		printf("이름: ");
		scanf_s("%s", tmp, 100);
		printf("점수: ");
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