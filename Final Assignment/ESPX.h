char* random_string(const size_t len);
size_t generate_msg(const size_t message_len,char* buf_msg);
size_t find_sender(const size_t length, const char* value);
void* client(void* dest);
void* server(void* dest);
void* client_handler(void* data);
void* server_handler(void* data);
int send_msg(int sockfd, char* msg);
int recv_msg(int sockfd, char* msg, size_t buflen);
short insert(char* value, short* history, char** buffer);
void sigHandler(int dummy);
double getMonotonicSecond();
short split(char* str, char* delim);
char* get_date();