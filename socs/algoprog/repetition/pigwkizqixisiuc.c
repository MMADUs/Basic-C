#include <stdio.h>

int main(){
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++) {
        long long int n, k;
        scanf("%lld %lld", &n,&k);
        getchar();
        char letter[n+1];
        scanf("%s", letter);
        printf("Case #%d: ", i+1);
        for (int i = 0; i < n; i++) {
            int ascii = ((letter[i] - 97 + k) % 26) + 97;
            printf("%c", ascii);
        }
        printf("\n");
    }
    return 0;
}
