#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

#define BUFSIZE 255

int main(int argc,char* argv[]){
		  int pid = 0;
		int fd;
		char buf[BUFSIZE];
		char* file = "\"./TestCodeCopy\"";
		  int c;

		  system("clear");
		  printf("\n Yahoo \n");
		  printf("LINEAR    : LINEAR\n");
		  printf("RAPID 	   : RAPID\n");
		  printf("CIRCLE1	: CIRCLE1\n");
		  printf("CIRCLE2   : CIRCLE2\n");
		  printf("SPLINE1   : SPLINE1\n");
		  printf("SPLINE2   : SPLINE2\n");

		  while((c=read(STDIN_FILENO,buf,BUFSIZE)>0)){
			printf("%s",buf);
					 if((pid=fork())<0){
								fprintf(stderr,"fork error\n");
								return 0;
					 }
					 if(pid>0){
								strcat(buf,file);
								execlp(file,"TestCodeCopy",NULL);
								printf("copy complete\n");
					 }else{
								while(1);
					 }
		  }
		  return 0;
}
	
