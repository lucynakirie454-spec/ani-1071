#include<cstdio>

int main() {
    for (int w = 2; w < 100; w++){
        bool premier = true;

        for(int f = 2; f < w ; f++){
            if(w % f == 0){
                premier = false;
                break;
            }
        }
        if(premier)
        printf("%d, ", w);
    }
    return 0;
}
