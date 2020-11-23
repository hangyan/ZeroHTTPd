#include<strings.h>


#define DEFAULAT_SEARVEAR_PORT 8000
#define REDIS_SERVER_HOST "127.0.0.1"
#define REDIS_SERVER_PORT 6379

int redis_socket_fd;
char redis_host_ip[32]



int setup_listening_socket(int port) {
  int sock;
  struct sockaddr_in srv_addr;

  sock = socket(PF_INET, )
}


int main(int argc, char *argv[]) {
  int server_port;
  if (argc > 1)
    server_port = atoi(argv[1]);
  else
    server_port = DEFAULAT_SEARVEAR_PORT;

  if (argc > 2)
    strcpy(redis_host_ip, argv[2]);
  else
    strcpy(redis_host_ip, REDIS_SERVER_HOST);

  int server_socket = setup_listening_socket(server_port);

  

}
