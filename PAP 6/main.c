#include "pustaka.h"

int main()
{
    int menu;
    printf("PILIHAN MENU\n\n");
    printf("1. binarySearch\n");
    printf("2. searchWord\n");

    printf("\nMasukkan pilihan : "); scanf("%d", &menu);
    printf("\n");

    switch(menu)
    {
    case 1:
        printf("\t\tBINARY SEARCH\n\n");

        int list1 [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int list2 [] = {4, 8, 6, 1, 10, 3, 9, 2, 7, 5};
        int c;

        sizeArr = sizeof(list1)/sizeof(int);
        printf("binarySearch (3, list1)\n");

        sorting(list1);
        binarySearch(3,list1);
        printf("\n\n");


        sizeArr = sizeof(list2)/sizeof(int);
        printf("binarySearch (8, list2)\n");

        sorting(list2);
        binarySearch(8, list2);
        printf("\n\n");

        break;


    case 2:
        printf("\t\tSEARCH WORD\n\n");

        printf("searchWord(Dian, Universitas Dian Nuswantoro) -> %s \n\n",(searchWord("Dian", "Universitas Dian Nuswantoro")==1)?"true":"false");
        printf("searchWord(Algo, Algoritma) -> %s \n\n",(searchWord("Algo", "Algoritma")==1)?"true":"false");
        printf("searchWord(Program, Pemrograman) -> %s \n\n",(searchWord("Program", "Pemrograman")==1)?"true":"false");
        printf("searchWord(Dinus, Dian Nuswantoro) -> %s \n\n",(searchWord("Dinus", "Dian Nuswantoro")==1)?"true":"false");

        break;

    }
    return 0;
}
