/* example16-10.c -- names_st.h -- ���ж�ΰ����������޶��汾 */
#ifdef NAMES_H_
#define NAMES_H_

//����
#define SLEN 32

//�ṹ����
struct names_st
{
	char fisrt[SLEN];
	char last[SLEN];
};
//���Ͷ���
typedef struct names_st names;

//����ԭ��
void get_names(names *);
void show_names(const names *);

#endif

