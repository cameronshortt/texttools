/*% cc -w -o # %
 * usage: all alphabet length
 * generate all possible combinations
 * of a certain length with the given
 * alphabet
 */
main (c,v)
char **v;
{
  int i,l;
  char **s,e;
  --c; ++v;
  l=atoi (v[1])+1;
  s=malloc (l<<3);
  e=*(*v+strlen (*v)-1);
  for (i=0;i<l;++i)
    s[i]=*v;
  while (*s[l-1]!=*(*v+1)) {
    for (i=l-2;i>=0;--i)
      putchar (*s[i]);
    putchar ('\n');
    for (i=0;;++i) {
      if (*s[i]==e) {
        s[i]=*v;
      } else {
        ++s[i];
        break;
      }
    }
  }
  free (s);
}
