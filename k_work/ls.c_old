/**********************************************************************
 * A simpler and shorter implementation of ls(1)
 * ls(1) is very similar to the DIR command on DOS and Windows.
 * You can find the sample code on the wikibooks link
 * https://en.wikibooks.org/wiki/C_Programming/POSIX_Reference/dirent.h
 **********************************************************************/
#include "main.h"

int listdir(const char *path) 
{
  struct dirent *entry;
  DIR *dp;

  dp = opendir(path);
  if (dp == NULL) 
  {
    perror("opendir");
    return -1;
  }

  while((entry = readdir(dp)))
    puts(entry->d_name);

  closedir(dp);
  return 0;
}

/*
int main(int argc, char **argv) {
  int counter = 1;

  if (argc == 1)
    listdir(".");

  while (++counter <= argc) {
    printf("\nListing %s...\n", argv[counter-1]);
    listdir(argv[counter-1]);
  }

  return 0;
}
*/
