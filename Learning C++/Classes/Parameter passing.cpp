#include "Param pass.h"

void TryDoubling_val(Transaction t)
{
	t.DoubleValue();
}

void TryDoubling_ref(Transaction& t)
{
	t.DoubleValue();
}