#include "fox.h"

living* fox::next(world w)
{
    int sum[STATES];
    sums(w, sum);
    if (sum[FOX > 5])
        return (new empty(row, column));
    else if (age > DFOX)
        return (new empty(row, column));
    else
        return (new fox(row, column, age + 1));
}