#include <stdio.h>
int main()
{
    int n, m, k, a[30],ans = 0,i;
    scanf("%d %d %d", &n, &m, &k);
    for(i = 0; i <= n; ++i)
        scanf("%d", &a[i]);
    ans = a[0];
    for(i = 1; i <= m; ++i)
        ans = a[i] + k * ans;
    printf("%d", ans);
    return 0;
}
