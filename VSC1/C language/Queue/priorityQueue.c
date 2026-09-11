#include <stdio.h>

#define N 100

int main(void)
{
    int v[N], p[N], n = 0;
    int ch, x, pr, i, pos;

    do
    {
        printf("1 Insert 2 Delete 3 Display 4 Exit: ");
        scanf("%d", &ch);

        if (ch == 1 && n < N)
        {
            scanf("%d%d", &x, &pr);

            v[n] = x;
            p[n++] = pr;
        }
        else if (ch == 2)
        {
            if (!n)
            {
                puts("Empty");
            }
            else
            {
                pos = 0;

                for (i = 1; i < n; i++)
                {
                    if (p[i] < p[pos])
                        pos = i;
                }

                printf("Deleted: %d\n", v[pos]);

                for (i = pos; i < n - 1; i++)
                {
                    v[i] = v[i + 1];
                    p[i] = p[i + 1];
                }

                n--;
            }
        }
        else if (ch == 3)
        {
            for (i = 0; i < n; i++)
                printf("(%d,%d) ", v[i], p[i]);

            puts("");
        }

    } while (ch != 4);

    return 0;
}