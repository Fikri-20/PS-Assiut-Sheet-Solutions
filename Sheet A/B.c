// Note: It gets accepted when compiled by C++17 (GCC 7-32), but unfortunately it wrong answered when compiled by GNU C11	(the same code!)
#include <stdio.h> 
void fileIO() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
int main(){
    fileIO();
    // int, long long, char, float and double
    int a; 
    long long b; 
    char c;
    float d;
    double e; 
    scanf("%d %lld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%lld\n%c\n%f\n%lf\n",a,b,c,d,e);
    
    return 0; 
}
