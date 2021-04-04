#include <stdio.h>

struct magazine{
    int price;
    int circulation;
    char name[30];

};

int main(void)
{
    struct magazine mag[] = { 23, 3000, "Times",  32, 2000, "Burda", 26, 500, "Elle",  41, 7000, "Vogue"};
    int n = sizeof(mag)/sizeof(mag[0]);
    int c=0; int k=0; float r;
    for(int i=0; i<n; i++)
    {
        printf("Name:%s \t Price: %d \t Circulation: %d \n", mag[i].name, mag[i].price, mag[i].circulation);
        if (mag[i].circulation > 1000){
            k=k+1;
            c=c+mag[i].price;
        }
        printf (" Average: %lf \n",  r=c/k  );


    }
    return 0;
}