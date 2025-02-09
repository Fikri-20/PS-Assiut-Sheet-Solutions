#include <stdio.h> 
void fileIO() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
int main(){
    fileIO();
    long long a,b; 
    scanf("%lld %lld", &a, &b);
    int la = a%10, lb = b%10;
    printf("%d", la+lb);

    return 0; 
}
