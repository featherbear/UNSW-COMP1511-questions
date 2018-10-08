// This program prints out some text

#include <stdio.h>

#define pc(a) putchar(a)
#define pf(a) printf(a)

int main(int argc, char **argv, char **envp) {


    pc('I');pc('t');pc(' ');
    pc('d');         pc('o');
    pc('e');          pc('s');
    pc('n');           pc('\'');
    pc('t');            pc(' ');
    pc('t');            pc('a');
    pc('k');           pc('e');
    pc(' ');          pc('t');
    pc('o');         pc('o');
    pc(' ');pc('m');pc('u');
    pc('c');         pc('h');
    pc(' ');          pc('e');
    pc('f');           pc('f');
    pc('o');            pc('r');
    pc('t');            pc(' ');
    pc('t');           pc('o');
    pc(' ');          pc('m');
    pc('a');         pc('k');
    pc('e');pc(' ');pc('t');
    pc('h');pc('i');pc('s');

    pc(' '); pc('p'); pc('r'); pc('o'); pc('g'); pc('r'); pc('a'); pc('m'); pc(' '); pc('w'); pc('o'); pc('r'); pc('k'); pc('\n')
    return pf("\x43\x6f\x75\x6c\x64\x20") + pf("\x61\x6c\x77\x61\x79\x73\x20") - pf("\x6a\x75\x73\x74\x20") * pf("\x75\x73\x65") | pf("\x20\x61\x20") - pf("\x73\x74\x72\x69\x6e\x67\x20") + pf("\x66\x6f\x72\x6d\x61\x74\x74\x65\x72") + pc('\n');
}