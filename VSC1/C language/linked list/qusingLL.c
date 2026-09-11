#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *f = NULL, *r = NULL, *n;
    int ch, x;

    do
    {
        printf("\n1 Insert 2 Delete 3 Display 4 Exit: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                n = malloc(sizeof(struct node));
                scanf("%d", &x);
                n->data = x;
                n->next = NULL;

                if (r == NULL)
                    f = r = n;
                else
                    r = r->next = n;
                break;

            case 2:
                if (f == NULL)
                    puts("Empty");
                else
                {
                    n = f;
                    printf("Deleted: %d", f->data);
                    f = f->next;
                    free(n);
                    if (f == NULL)
                        r = NULL;
                }
                break;

            case 3:
                for (n = f; n; n = n->next)
                    printf("%d ", n->data);
                break;
        }
    } while (ch != 4);

    return 0;
}