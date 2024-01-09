main (c,v)
char **v;
{
  int i,r;
  i=atoi (v[2]);
  while (i--) {
    r=arc4random_uniform (strlen (v[1]));
    putchar (v[1][r]);
  }
  putchar ('\n');
  exit (0);
}
