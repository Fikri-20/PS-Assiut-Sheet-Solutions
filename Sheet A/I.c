#include <stdio.h> 
#include <math.h> 
void fileIO() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
int main(){
    fileIO();
    int a, b; 
    scanf("%d %d", &a, &b);
    if(a >= b) printf("Yes");
    else printf("No"); 
    return 0; 
}
