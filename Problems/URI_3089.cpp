// https://www.urionlinejudge.com.br/judge/pt/problems/view/3089

#include <stdio.h>
#include<string.h>

#define MAX 100000

int main()
{
   int n, maior, menor;
    int m[MAX];
    
    scanf("%d", &n);
    while(n != 0){
        int x = 2 * n-1;
        for(int j = 0; j < 2*n; j++){
            scanf("%d", &m[j]);

        maior = 0;
        menor = m[0]+m[x];        }

        for(int i = 0; i < n; i++){

            if(m[i]+m[x] > maior){
                maior = m[i]+m[x];
            } else if(m[i]+m[x] < menor){
                menor = m[i]+m[x];
            }
            x--;
        
        }

        if(n > 0){
            printf("%d %d\n", maior, menor);
        }
        scanf("%d", &n);

    }


    

    return 0;
}