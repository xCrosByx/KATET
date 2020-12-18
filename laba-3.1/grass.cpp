#include "grass.h"


living* grass::next(world w)
{
    int sum[STATES];
    sums(w, sum);
    if (sum[GRASS] > sum[RABBIT])
        return (new grass(row, column));
    else
        return (new empty(row, column));
}