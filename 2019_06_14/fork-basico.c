#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

/**
este programa en C debe imprimir lo siguiente: 

soy le hijo y mi identificador es 1112
soy el padre, y mi identificador es 1111 y el de mi hijo es 1112

hacer uso de la funcion getpid()
*/


int main( int argc, char** argv) {
	pid_t pid;

	pid = fork();
	if(pid==0){
	sleep(2);
	  printf("soy el hijo y mi identificador es %d\n", (int) getpid());
	} else {
	int status;
	wait (&status);
	int rc_wait = wait(NULL);
	  printf("soy el padre, y mi identificador es %d y el de mi hijo es %d\n", getpid(), pid);
	}
}
