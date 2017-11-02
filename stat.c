#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/stat.h>

int main(){
  struct stat llamabuffer;
  stat("llama.txt", &llamabuffer);

  //printing cool stuff
  printf("info of:%s\n", "llama.txt");
  printf("llama size:%d\n",(int)( llamabuffer.st_size));
  printf("llama mode:%d\n", (int)(llamabuffer.st_mode));
  printf("llama last access:%s\n", ctime(&(llamabuffer.st_atime)));
  return 0;
  
}
