
typedef struct _MSG_INFO_S
{
	char* field_name;
	int   field_len;
}MSG_INFO;

typedef struct _BB4INFO_S
{
	int   bb4_key;
	char* bb4_key_name;
	MSG_INFO *msg;
}BB4INFO_S;