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
    if((a%b == 0) || (b%a == 0)) printf("Multiples");
    else printf("No Multiples"); 
    return 0; 
}
