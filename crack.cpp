#include <pdflib.h>
void crack(PDF* pdf)
{
    auto *a1=((unsigned char*)pdf);
    *(unsigned char*)(a1+40)=31;
    *(int*)(a1+64)=308895922;
}