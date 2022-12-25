#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double score[1010];
	double num;
	double max = 0;
	scanf("%lf", &num);
	for (int i = 0; i < num; i++) {
		scanf("%lf", &score[i]);
		if (score[i] > max)
			max = score[i];
	}
	double sum = 0;
	for (int i = 0; i < num; i++) {
		score[i] = score[i] / max * 100;
		sum = sum + score[i];
	}
	printf("%lf", sum / num);

	return 0;
}