#include <iostream>

int main(){
    int a[5]={59,49,8,93,7};

    int m;
    int count=0;
    for (int i=0; i<5; i++){
        for (int k=2; k<10; k++){
            float m=pow(a[i], 1.0/k);
            if (m==(int)m){count=count+1;
             break;
            }

        }
    }
    std::cout << "\n" << count;
}