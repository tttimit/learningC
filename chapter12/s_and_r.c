/* s_and_r.c -- 包含rand1()和strand1()的文件 */
//使用ANSI C的可移植算法
static unsigned long int next = 1 ; //seed
int rand1(void)
{
	// magic
	next = next * 1103515245 + 12345;
	return (unsigned int)(next/65535) % 32768;
}

void srand1(unsigned int seed)
{
	next = seed;
}
