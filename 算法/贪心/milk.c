#include <stdio.h>
#include <stdlib.h>

#define MAXFARMER 5000

typedef struct Farmer Farmer;
struct Farmer {
    int p;  /* price per gallon */
    int a;  /* amount to sell */
};

int farmcmp(const void *va, const void *vb)
{
    return ((Farmer*)va)->p - ((Farmer*)vb)->p;
}

int main()
{
    int i, n, a, p,nfarmer;
    Farmer farmer[MAXFARMER];
    
    while(scanf("%d%d", &n, &nfarmer)!=EOF)
    {
        for(i=0; i<nfarmer; i++)
            scanf("%d%d", &farmer[i].p, &farmer[i].a);

        qsort(farmer, nfarmer, sizeof(farmer[0]), farmcmp);

        p = 0;
        for(i=0; i<nfarmer && n > 0; i++)
        {
            /* take as much as possible from farmer[i], up to amount n */
            a = farmer[i].a;
            if(a > n)
                a = n;
            p += a*farmer[i].p;
            n -= a;
        }

        printf("%d\n", p);
    }
    return 0;
}
