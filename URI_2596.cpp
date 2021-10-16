#include <stdio.h>

int main()
{
    int n, b, cont, total,x, y;
    scanf("%d", &n);
    cont = 0;
    total = 0;

    while(n > 0){

        scanf("%d", &b);
        for(int i = 0; i < b; i++){
            x = b - i;
            y = x;

            while(x > 0){
                if(y%x == 0){
                    cont += 1;
                }
                x--;
            }
            if(cont % 2 == 0){
                total += 1;
            }
            
            cont = 0;
        }
        printf("%d\n", total);
        total = 0;
       
        n--;

    }

    return 0;
}