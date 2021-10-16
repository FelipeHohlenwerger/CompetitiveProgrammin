#include <stdio.h>
#include<string.h>

#define MAX 1000

int main()
{
    int n;
    char s[MAX];
    bool Q, J, K, A;
    Q = J = K = A = false;


    scanf("%d", &n);

    while(n>0){
        scanf(" %[^\n]", s);
        int x = strlen(s);

        for(int i = 0; i < x; i++){
            if(s[i] == 'Q')
                Q = true;
            else if(s[i] == 'J')
                J = true;
            else if(s[i] == 'K')
                K = true;
            else if(s[i] == 'A')
                A = true;
        }
        if(Q && J && K && A){
        printf("Aaah muleke\n");
        } else {
        printf("Ooo raca viu\n");
        }
        
        Q = J = K = A = false;
        n--;
        }

    

    return 0;
}