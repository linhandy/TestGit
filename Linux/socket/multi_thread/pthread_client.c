/*************************************************** 
    * �ļ�����pthread_client.c 
    * �ļ��������������߳������տͻ��˵����� 
    ***************************************************/  
#include <sys/types.h>  
#include <sys/socket.h>  
#include <stdio.h>  
#include <netinet/in.h>  
#include <arpa/inet.h>  
#include <unistd.h>  
#include <stdlib.h>  
int main(int argc,char *argv[])  
{  
       int sockfd;  
       int len;  
       struct sockaddr_in address;     
       int result;  
       int i,byte;  
       char char_send[100] = { 0 };  
    if((sockfd = socket(AF_INET, SOCK_STREAM, 0))==-1)  
       {  
              perror("socket");  
              exit(EXIT_FAILURE);  
       }  
    if(argc != 3){  
      printf("Usage: fileclient <address> <port>/n");//�÷����ļ��� ������IP��ַ �������˿ڵ�ַ  
      return 0;  
   }  
   if((sockfd = socket(AF_INET,SOCK_STREAM,0)) == -1){  
       perror("sock");  
       exit(1);  
   }  
   bzero(&address,sizeof(address));  
   address.sin_family = AF_INET;  
   address.sin_port = htons(atoi(argv[2]));  
   inet_pton(AF_INET,argv[1],&address.sin_addr);  
len = sizeof(address);  
   
    if((result = connect(sockfd, (struct sockaddr *)&address, len))==-1)  
       {  
              perror("connect");  
              exit(EXIT_FAILURE);  
       }  
   
       for(;;)  
       {  
             scanf("%s", char_send);//���뷢������  
              fflush(stdin);//������뻺��  
              if(strcmp(char_send, "exit")==0){//�������exit������ѭ��  
                     if((byte=send(sockfd,char_send,100,0))==-1)  
                     {  
                            perror("send");  
                            exit(EXIT_FAILURE);  
                     }             
                     break;  
              }                    
              if((byte=send(sockfd,char_send,100,0))==-1)  
              {  
                     perror("send");  
                     exit(EXIT_FAILURE);  
              }  
       }  
    close(sockfd);  
    exit(0);  
}   
