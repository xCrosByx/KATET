#include "empty.h"

living* empty::next(world w)
{
    int sum[STATES];
    sums(w, sum);
    if (sum[FOX] > 1)
        return (new fox(row, column));
    else if (sum[RABBIT] > 1)
        return (new rabbit(row, column));
    else if (sum[GRASS])
        return (new grass(row, column));
    else
        return (new empty(row, column));
}