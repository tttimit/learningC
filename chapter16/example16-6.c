/* example16-6.c -- names_st�ṹ��ͷ�ļ� */
//����
#define SLEN 32

//�ṹ����
struct name_st{
	char first[SLEN];
	char last[SLEN];
};

//���Ͷ���
typedef struct names_st names;

//����ԭ��
void get_names(names *);
void show_names(const names *);


