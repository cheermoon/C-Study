#ifndef SOCKET_LIB_H
#define SOCKET_LIB_H
int make_server_socket(int portNum);
int connect_to_server(char *host, int portNum);
#endif