#include <stdio.h> 
void fileIO() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
int main(){
    fileIO();
    long long a; 
    scanf("%lld %lld", &a);
    printf("%lld", (a*(a+1)/2));

    return 0; 
}
