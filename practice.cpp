
#include <iostream>
int add(int n);
int main()
{
	int orin_sum = add(21 * 20);
	int ans = orin_sum - (20 * (add(21) - 1))- (21 * (add(20) - 1));
	printf("%d\n", ans);
	for (int i = 4; i < 21; i++)
	{
		ans -= (add(i) - 1)*2;
	}
	printf("%d", ans);
}

int add(int n)
{
	int i, sum = 0;
	for (i = 1; i < n; i++)
	{
		sum += i;
	}
	return sum;
}
