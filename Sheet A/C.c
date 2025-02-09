#include <stdio.h> 
void fileIO() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
int main(){
    fileIO();
    long long a, b; 
    scanf("%lld %lld", &a, &b);
    printf("%lld + %lld = %lld\n", a, b, a+b);
    printf("%lld * %lld = %lld\n", a, b, a*b);
    printf("%lld - %lld = %lld", a, b, a-b);
    
    return 0; 
}
