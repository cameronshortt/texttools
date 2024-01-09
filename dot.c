/*% cc -w -o # %
 * dot - move dot through word
 * usage: dot word
 *   e.g: dot hello
 */

main (c,v)
char **v;
{
  if (c!=2)
    exit (1);

  ++v;

  for (c=1;c<strlen (*v);++c) {
    write (1,*v,c);
    write (1,".",1);
    write (1,*v+c,strlen (*v)-c);
    write (1,"\n",1);
  }
}
