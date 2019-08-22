#include <stdio.h>
#include <stdlib.h>

int main()
{
  char c;
  FILE *from, *to;

  from = fopen("playlist.txt", "r");//int argc,char *argv[]//for(i=0;i<argc;i++)//{if(argv[i]==.wav)c=getc(from)putc(c,to);fclose(to);fclose(from)
  if (from == NULL)
  {
    perror("playlist.txt doesn't exist.");
    exit(1);
  }

  to = fopen("myplaylist.txt", "w");
  if (to == NULL)
    {
      perror("copy.txt doesn't exist.");
      exit(1);
    }
  do
    {
      c = getc(from);
      putc(c, to);
    }
  while(c != EOF);
  fclose(to);
  fclose(from);
  exit(0);
}
