#include <stdio.h> 
void fileIO() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
int main(){
    fileIO();
    long long a, b, c, d; 
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    printf("Difference = %lld", (a*b)-(c*d));
    
    return 0; 
}
