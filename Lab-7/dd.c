#include<stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t) {
		int l;
		scanf("%d", &l);
		int a[l+1];
		int count[200001] = {0};
		int s = -1;
		for (int i = 0; i < l; i++) {
			scanf("%d",&a[i]);
			count[a[i]]++;
		}
		for (int i = 1; i <= l; i++) {
			if (count[i] >= 3) {
				s = i;
				break;
			}
		}
		printf("%d\n", s);
		t--;
	}
	return 0;
}
