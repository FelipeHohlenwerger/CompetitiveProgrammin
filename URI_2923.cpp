#include <stdio.h>

int main()
{
    int t, a, w, c;

    scanf("%d %d %d %d", &t, &a, &w, &c);
    double p = (double)a/t*100;

    if(w<=p && p<c){
        printf("warning\n");
    } else if(c <= p){
        printf("critical\n");
    
    } else{
        printf("OK\n");
    }

    return 0;
}