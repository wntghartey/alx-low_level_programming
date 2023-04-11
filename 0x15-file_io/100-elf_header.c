#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;


if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
exit(98);
}


if ((fd = open(argv[1], O_RDONLY)) == -1)
{
fprintf(stderr, "Error: Cannot open file '%s'\n", argv[1]);
exit(98);
}


if (read(fd, &header, sizeof(header)) != sizeof(header))
{
fprintf(stderr, "Error: Cannot read ELF header from file '%s'\n", argv[1]);
exit(98);
}

if (header.e_ident[EI_MAG0] != ELFMAG0 ||header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
{
fprintf(stderr, "Error: '%s' is not an ELF file\n", argv[1]);
exit(98);
}


printf("Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", header.e_ident[i]);
}
printf("\n");

printf("Class:                             ");
switch (header.e_ident[EI_CLASS])
{
case ELFCLASSNONE: printf("None\n"); break;
case ELFCLASS32:   printf("ELF32\n"); break;
case ELFCLASS64:   printf("ELF64\n"); break;
default:           printf("<unknown>\n"); break;
}

printf("Data:                              ");
switch (header.e_ident[EI_DATA]) {
case ELFDATANONE: printf("None\n"); break;
case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
default:          printf("<unknown>\n"); break;
}

printf("Version:                           %d\n", header.e_ident[EI_VERSION]);

printf("OS/ABI:                            ");
switch (header.e_ident[EI_OSABI])
{
case ELFOSABI_NONE:      printf("UNIX System V ABI\n"); break;
case ELFOSABI_HPUX:      printf("HP-UX ABI\n"); break;
case ELFOSABI_NETBSD:    printf("NetBSD ABI\n"); break;
case ELFOSABI_LINUX:     printf("Linux ABI\n"); break;
case ELFOSABI_SOLARIS:   printf("Solaris ABI\n"); break;
case ELFOSABI_AIX:       printf("AIX ABI\n"); break;
case ELFOSABI_IRIX:      printf("IRIX ABI\n"); break;
case ELFOSABI_FREEBSD:   printf("FreeBSD ABI\n"); break;
case ELFOSABI_TRU64:     printf("Compaq TRU64 UNIX ABI\n"); break;
case ELFOSABI_MODESTO:   printf("Novell Modesto ABI\n"); break;
case ELFOSABI_OPENBSD:   printf
free(header);
close_elf(o);
return (0);
}

