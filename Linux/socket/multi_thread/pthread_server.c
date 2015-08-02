/*************************************************** 
* �ļ�����pthread_server.c 
* �ļ��������������߳������տͻ��˵����� 
***************************************************/  
#include <sys/types.h>  
#include <sys/socket.h>  
#include <stdio.h>  
#include <netinet/in.h>  
#include <arpa/inet.h>  
#include <unistd.h>  
#include <stdlib.h>  
#include <pthread.h>  
void *rec_data(void *fd);  
int main(int argc,char *argv[])  
{  
	int server_sockfd;  
	int *client_sockfd;  
	int server_len, client_len;  
	struct sockaddr_in server_address;  
	struct sockaddr_in client_address;  
	struct sockaddr_in tempaddr;  
	int i,byte;  
	char char_recv,char_send;  
	socklen_t templen;  
	server_sockfd = socket(AF_INET, SOCK_STREAM, 0);//�����׽���  

	server_address.sin_family = AF_INET;  
	server_address.sin_addr.s_addr =  htonl(INADDR_ANY);  
	server_address.sin_port = htons(9734);  
	server_len = sizeof(server_address); 
	
    printf("before bind/n");  
	
	bind(server_sockfd, (struct sockaddr *)&server_address, server_len);//���׽���  
	templen = sizeof(struct sockaddr);  

	printf("server waiting for connect/n");  
	while(1){  
	      pthread_t thread;//������ͬ�����߳�������ͬ�Ŀͻ���  
	      client_sockfd = (int *)malloc(sizeof(int));  
	      client_len = sizeof(client_address);  
	      *client_sockfd = accept(server_sockfd,(struct sockaddr *)&client_address, (socklen_t *)&client_len);  
	      if(-1==*client_sockfd){  
	             perror("accept");  
	             continue;  
	      }  
	      if(pthread_create(&thread, NULL, rec_data, client_sockfd)!=0)//�������߳�  
	      {  
	             perror("pthread_create");  
	             break;  
	      }  
	}  
	shutdown(*client_sockfd,2);  
	shutdown(server_sockfd,2);  
}  
/***************************************** 
* �������ƣ�rec_data 
* �������������ܿͻ��˵����� 
* �����б�fd���������׽��� 
* ���ؽ����void 
*****************************************/  
void *rec_data(void *fd)  
{  
   int client_sockfd;  
   int i,byte;  
   char char_recv[100];//�������  
   client_sockfd=*((int*)fd);  
   for(;;)  
   {  
          if((byte=recv(client_sockfd,char_recv,100,0))==-1)  
          {  
                 perror("recv");  
                 exit(EXIT_FAILURE);   
          }  
          if(strcmp(char_recv, "exit")==0)//���ܵ�exitʱ������ѭ��  
                 break;  
          printf("receive from client is %s/n",char_recv);//��ӡ�յ�������  
   }  
   free(fd);  
   close(client_sockfd);  
   pthread_exit(NULL);  
}  


   