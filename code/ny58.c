#include<stdio.h>
#include<string.h>
int sum, c, d, visited[9][9], min;
int map[9][9] = {
{1,1,1,1,1,1,1,1,1},
{1,0,0,1,0,0,1,0,1},
{1,0,0,1,1,0,0,0,1},
{1,0,1,0,1,1,0,1,1},
{1,0,0,0,0,1,0,0,1},
{1,1,0,1,0,1,0,0,1},
{1,1,0,1,0,1,0,0,1},
{1,1,0,1,0,0,0,0,1},
{1,1,1,1,1,1,1,1,1}
};
void DFS(int k, int t) {
   if (k == c && t == d) {
   if (sum < min)
   min = sum;

   return;
   }
   if (!visited[k][t]) {
   visited[k][t] = 1;
   sum++;
   if (!map[k - 1][t] && !visited[k - 1][t]) //ио
   DFS(k - 1, t);
   if (!map[k][t - 1] && !visited[k][t - 1]) //вС
   DFS(k, t - 1);
   if (!map[k + 1][t] && !visited[k + 1][t]) //об
   DFS(k + 1, t);
   if (!map[k][t + 1] && !visited[k][t + 1]) //ср
   DFS(k, t + 1);
   visited[k][t] = 0;
   sum--;
   }
}
int main() {
int n, a, b;
scanf("%d", &n);
while (n--) {
scanf("%d%d%d%d", &a, &b, &c, &d);
min = 81;
sum = 0;
memset(visited, 0, sizeof(visited));
DFS(a, b);
printf("%d\n", min);
}
}