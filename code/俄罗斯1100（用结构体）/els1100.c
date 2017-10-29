#include <cstdio>
#include <algorithm>
using namespace std;
struct node {
    int id;
    int solve;
} a [10000000 + 10];


bool cmp(node i,node j){
	if(i.solve>j.solve)return true;
	return false;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i].id,&a[i].solve);
	}
	stable_sort (a, a + n, cmp);
	for(i=0;i<n;i++)
	printf("%d %d\n",a[i].id,a[i].solve);
  //  printf ("%d %d\n", a [i].id, a [i].solve);
	return 0;
} 