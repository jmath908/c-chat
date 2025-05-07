#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <signal.h>

int main(void)
{

    char username[20];
    printf("Please enter a username\n");
    scanf("%s", username);
    int yes;
    printf("\nWelcome, %s!\n", username);
    while(1){
    	printf("Would you like to join the chatroom?\n(1)Yes\n(2)No\n");
    	
    	scanf("%i", &yes);
        if(yes == 1){
	printf("in yes\n");
	//join
   	}
    	else{
            printf("invalid option\n");
    	}
    }
    return 1;

}
