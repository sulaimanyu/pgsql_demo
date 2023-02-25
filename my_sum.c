#include "postgres.h"
#include "fmgr.h"

PG_FUNCTION_INFO_V1(get_my_sum);

Datum get_my_sum(PG_FUNCTION_ARGS)
{
    int arg1 = PG_GETARG_INT32(0);
    int arg2 = PG_GETARG_INT32(1);
    int result = arg1 + arg2;

    PG_RETURN_INT32(result);
}

PG_MODULE_MAGIC;
