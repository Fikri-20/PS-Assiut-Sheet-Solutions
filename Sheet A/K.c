#include <stdio.h> 
#include <math.h> 
void fileIO() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int min(int a, int b){
    if(a <= b) return a;
    else return b;
}

int max(int a, int b){
    if(a >= b) return a;
    else return b;
}

int main(){
    fileIO();
    int a, b, c; 
    scanf("%d %d %d", &a, &b, &c);
    printf("%d %d", min(a,min(b,c)), max(a, max(b,c)));
    return 0; 
}
