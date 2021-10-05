#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    char a[] = {"   #\n  # #\n #####\n #   #\n #   #\n\n"};
    char b[] = {" #####\n #    #\n #####\n #    #\n #####\n\n"};
    char c[] = {"  #####\n #\n #\n #\n  #####\n\n"};
    char d[] = {" #####\n #    #\n #    #\n #    #\n #####\n\n"};
    char e[] = {" ######\n #\n #####\n #\n ######\n\n"};
    char f[] = {" ######\n #\n #####\n #\n #\n\n"};
    char g[] = {"  #####\n #\n #  ####\n #     #\n  #####\n\n"};
    char h[] = {" #     #\n #     #\n #######\n #     #\n #     #\n\n"};
    char i[] = {" #####\n   #\n   #\n   #\n #####\n\n"};
    char j[] = {"  #####\n    #\n    #\n #  #\n  ##\n\n"};
    char k[] = {" #   #\n #  #\n ###\n #  #\n #   #\n\n"};
    char l[] = {" #\n #\n #\n #\n ######\n\n"};
    char m[] = {" #     #\n # # # #\n #  #  #\n #     #\n #     #\n\n"};
    char n[] = {" #     #\n # #   #\n #  #  #\n #   # #\n #     #\n\n"};
    char o[] = {"  ####\n #    #\n #    #\n #    #\n  ####\n\n"};
    char p[] = {" #####\n #    #\n #####\n #\n #\n\n"};
    char q[] = {"  ####\n #    #\n #    #\n #  # #\n  #### #\n\n"};
    char r[] = {" #####\n #    #\n #####\n #    #\n #    #\n\n"};
    char s[] = {"  ####\n #\n  ####\n      #\n  ####\n\n"};
    char t[] = {" #####\n   #\n   #\n   #\n   #\n\n"};
    char u[] = {" #    #\n #    #\n #    #\n #    #\n  ####\n\n"};
    char v[] = {" #     #\n #     #\n  #   #\n   # #\n    #\n\n"};
    char w[] = {" #       #\n #   #   #\n  # # # #\n   #   #\n\n"};
    char x[] = {" #     #\n  #   #\n    #\n  #   #\n #     #\n\n"};
    char y[] = {" #     #\n  #   #\n    #\n    #\n    #\n\n"};
    char z[] = {" #####\n    #\n   #\n  #\n #####\n\n"};
    printf("Enter a string:\n");
    gets(str);

    for (int tmp=0;tmp<=strlen(str);tmp++) {
        if (str[tmp] == 'a' || str[tmp] == 'A') {
            printf("%s", a);
        }
        else if (str[tmp] == 'b' ||str[tmp] == 'B') {
            printf("%s", b);
        }
        else if (str[tmp] == 'c' || str[tmp] == 'C') {
            printf("%s", c);
        }
        else if (str[tmp] == 'd' || str[tmp] == 'D') {
            printf("%s", d);
        }
        else if (str[tmp] == 'e' || str[tmp] == 'E') {
            printf("%s", e);
        }
        else if (str[tmp] == 'f' || str[tmp] == 'F') {
            printf("%s", f);
        }
        else if (str[tmp] == 'g' || str[tmp] == 'G') {
            printf("%s", g);
        }
        else if (str[tmp] == 'h' || str[tmp] == 'H') {
            printf("%s", h);
        }
        else if (str[tmp] == 'i' || str[tmp] == 'I') {
            printf("%s", i);
        }
        else if (str[tmp] == 'j' || str[tmp] == 'J') {
            printf("%s", j);
        }
        else if (str[tmp] == 'k' || str[tmp] == 'K') {
            printf("%s", k);
        }
        else if (str[tmp] == 'l' || str[tmp] == 'L') {
            printf("%s", l);
        }
        else if (str[tmp] == 'm' || str[tmp] == 'M') {
            printf("%s", m);
        }
        else if (str[tmp] == 'n' || str[tmp] == 'N') {
            printf("%s", n);
        }
        else if (str[tmp] == 'o' || str[tmp] == 'O') {
            printf("%s", o);
        }
        else if (str[tmp] == 'p' || str[tmp] == 'P') {
            printf("%s", p);
        }
        else if (str[tmp] == 'q' || str[tmp] == 'Q') {
            printf("%s", q);
        }
        else if (str[tmp] == 'r' || str[tmp] == 'R') {
            printf("%s", r);
        }
        else if (str[tmp] == 's' || str[tmp] == 'S') {
            printf("%s", s);
        }
        else if (str[tmp] == 't' || str[tmp] == 'T') {
            printf("%s", t);
        }
        else if (str[tmp] == 'u' || str[tmp] == 'U') {
            printf("%s", u);
        }
        else if (str[tmp] == 'v' || str[tmp] == 'V') {
            printf("%s", v);
        }
        else if (str[tmp] == 'w' || str[tmp] == 'W') {
            printf("%s", w);
        }
        else if (str[tmp] == 'x' || str[tmp] == 'X') {
            printf("%s", x);
        }
        else if (str[tmp] == 'y' || str[tmp] == 'Y') {
            printf("%s", y);
        }
        else if (str[tmp] == 'z' || str[tmp] == 'Z') {
            printf("%s", z);
        }
        else if (str[tmp] == ' ') {
            printf(" \n \n \n \n \n");
        }
    }
    return 0;
}
