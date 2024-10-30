#include <bits/stdc++.h>
        using namespace std;
        #define N 1000010
        unsigned long long order[N];
        unsigned long long reorder[N], p[N];
        char a[N];
        int n, T;
               int main()
        {
            scanf("%d%d", &n, &T);
            scanf("%s", a+1);
            p[0] = 1;
            for(int i = 1; i <= n; i++)
                p[i] = p[i-1]*131;
            for(int i = 1; i <= n; i++)
            {
                order[i] = order[i-1] * 131 + a[i] - 'a' + 1;
            }
            for(int i = n; i >= 1; i--)
            {
                reorder[i] = reorder[i+1] * 131 + a[i] - 'a' + 1;
            }
            for(int _ = 1; _ <= T; _++)
            {
                int l, r;
                scanf("%d%d", &l, &r);
                if(order[r] - order[l-1] * p[r-l+1] == reorder[l] - reorder[r+1]*p[r-l+1])
                {
                    puts("Budada");
                }
                // else if(order[r] - order[l] * p[r-l] == reorder[l+1] - reorder[r+1]*p[r-l] &&
                //         order[r-1] - order[l-1] * p[r-l] == reorder[l] - reorder[r]*p[r-l]
                // )
                // {
                //     puts("Budada");
                // }
                else{
                    if((r-l+1)&1 == 1)
                    {
                        puts("Putata");
                    }
                    else
                    {
                        puts("Budada");
                    }
                }
            }
            return 0;
        }