#include "rabbit.h"


living* rabbit::next(world w)
{
    int sum[STATES];
    sums(w, sum);
    if (sum[FOX] >= sum[RABBIT])
        return (new empty(row, column));
    else if (age > DRAB)
        return (new empty(row, column));
    else
        return(new rabbit(row, column, age + 1));
}