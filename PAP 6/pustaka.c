#include "pustaka.h"

void sorting(int data[])
{
    int c, d, min, temp;
    for(c=0; c<sizeArr; c++){
        min=c;
        for(d=c+1; d<sizeArr; d++){
            if(data[d]<data[min]){
                min=d;
            }
            temp = data[c];
            data[c] = data[min];
            data[min]= temp;
        }
    };
}

int binarySearch(int angka, int data[])
{
    int l, r, m, i;
    l = 0;
    r = sizeArr-1;

    while (l <= r){
        m=(l + r)/2;
        for(i=l; i<=r; i++){
                printf("%d, ", data[i]);
            }
        printf("\n");

        if(angka==data[m]){
            printf("%d \n",data[m]);
            break;
        }
        else if (angka<data[m]){r=m-1;}
        else {l=m+1;}
    }

    if(l > r){
        printf("data gak ditemukan");
    }
}


int searchWord(char word[], char text[])
{
    int i=0;
    int j=0;
    int k=0;
    int counter=0;
    int temp=0;

    temp = strlen(word);
    int bol=0;
    while(text[i]!='\0'){
         if(text[i]!=word[j]){
             counter=0;
              i++;
              j=0;
            }

         else{
                j++;
                i++;
                counter++;
                if(temp==counter || temp==counter && text[i]=='\0'){
                   bol++;
                   j=0;
                   counter=0;
              }
         }
    }
       if(bol>=1){return 1;}
       else{return 0;}
}
