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
    const double pi = 3.141592653;
    double r;
    scanf("%lf", &r);
    printf("%.9lf", pi*r*r);

    return 0; 
}
