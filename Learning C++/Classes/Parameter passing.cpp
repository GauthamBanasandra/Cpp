#include "Param pass.h"

// Function that accepts a value. Changes are not preserved.
void TryDoubling_val(Transaction t)
{
	t.DoubleValue();
}

// Function that accepts a reference. Changes are preserved.
void TryDoubling_ref(Transaction& t)
{
	t.DoubleValue();
}