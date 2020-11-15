#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct id
{
	char name[1000];
	int score[100];
	int total = 0;
	int min = 9999;
};
void check(int x, int& max)
{
	if (x >= max)
	{
		max = x;
	}
}
int main()
{
	struct id id[100];
	int y, x, i, j, min[100], max;
	cin >> x;
	cin >> y;
	for (i = 0; i < x; i++)
	{
		cin >> id[i].name;
		for (j = 0; j < y; j++)
		{
			cin >> id[i].score[j];
			if (id[i].score[j] < id[i].min)
			{
				id[i].min = id[i].score[j];
			}
			id[i].total = id[i].total + id[i].score[j];
		}
		id[i].total = id[i].total - id[i].min;
	}
	for (i = 0; i < x; i++)
	{
		check(id[i].total, max);
	}
	printf("%d\n", max);
	for (i = 0; i < x; i++)
	{
		if (id[i].total >= max)
		{
			printf("%s\n", id[i].name);
		}
	}
	return 0;
}