typedef int *value;

value *g (int v);

void
f (value *arr)
{
  value *v = g (a * b);
}
