
#define TYPE int

static int cmp(const void *a, const void *b){
  const TYPE da = *((const TYPE *) a);
  const TYPE db = *((const TYPE *) b);
  
  return (da < db) ? 1 : (da == db) ? 0 : -1;
}
