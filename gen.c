/*% cc -w -o # %
 * usage: gen [-y] letters
 * generates words from letter types (cv.)
 * -y treats 'y' as a vowel
 */
char *a="aeiouybcdfghjklmnpqrstvwxz";
main (c,v)
char **v;
{
  int i,o;
  if (c==3) {
    o=6;
    ++v;
  } else {
    o=5;
  }
  --c; ++v;
  srand48 (time (0)+getpid ()*getpid ());
  for (;**v;++*v) {
    switch (**v) {
    case 'v':
      putchar (*(a+lrand48 ()%o));
      break;
    case 'c':
      putchar (*(a+lrand48 ()%(strlen (a)-o)+o));
      break;
    default:
      putchar (*(a+lrand48 ()%strlen (a)));
    }
  }
  putchar ('\n');
}
