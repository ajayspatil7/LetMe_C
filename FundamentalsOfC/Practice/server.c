/* 

This is a program I have wrote
for something else,
It's an advance program. Not recomended uf you are a begineer
But, you are free to look through.

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>

#define PORT 8080

int main(int argc, char *argv[])
{
    int sockfd, newsockfd, portno;
    socklen_t clilen;
    char buffer[256];
    struct sockaddr_in serv_addr, cli_addr;
    int n;

    // create a socket
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) 
    {
        perror("ERROR opening socket");
        exit(1);
    }

    // clear the address structure
    memset((char *) &serv_addr, 0, sizeof(serv_addr));

    // set the address family
    serv_addr.sin_family = AF_INET;

    // set the port number
    serv_addr;

  }
