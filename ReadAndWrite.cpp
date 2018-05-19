#include<unistd.h>
#include<stdlib.h>
#define BUFFSIZE 4096

int main()
{
 int n;
 int buf[BUFFSIZE];
 while((n = read(STDIN_FILENO,buf,BUFFSIZE)) > 0)
    if(write(STDOUT_FILENO,buf,n)!=n)
       exit(-1);
 if(n<0)
   exit(-1);
 exit(0);
}
