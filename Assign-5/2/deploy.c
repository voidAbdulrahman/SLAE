#include<stdio.h>
#include<string.h>

unsigned char buf[] = 
"\xeb\x36\xb8\x05\x00\x00\x00\x5b\x31\xc9\xcd\x80\x89\xc3\xb8"
"\x03\x00\x00\x00\x89\xe7\x89\xf9\xba\x00\x10\x00\x00\xcd\x80"
"\x89\xc2\xb8\x04\x00\x00\x00\xbb\x01\x00\x00\x00\xcd\x80\xb8"
"\x01\x00\x00\x00\xbb\x00\x00\x00\x00\xcd\x80\xe8\xc5\xff\xff"
"\xff\x2f\x68\x6f\x6d\x65\x2f\x61\x62\x64\x75\x6c\x72\x61\x68"
"\x6d\x61\x6e\x2f\x44\x65\x73\x6b\x74\x6f\x70\x2f\x53\x4c\x41"
"\x45\x2d\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x73\x2f\x41"
"\x73\x73\x69\x67\x6e\x5f\x35\x2f\x74\x65\x73\x74\x2e\x74\x78"
"\x74\x00";


;




int main()
{
	printf("Shellcode Length:  %d\n", strlen(buf));
	int (*ret)() = (int(*)())buf;
	ret();
}
