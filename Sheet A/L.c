#include <stdio.h> 
#include <math.h> 
#include <stdbool.h> 
void fileIO() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int main(){
    fileIO();
    char a[100] = {'a'};
    char b[100] = {'a'};
    char c[100] = {'a'};
    char d[100] = {'a'};

    scanf("%s %s %s %s", &a, &b, &c, &d);
    bool f=1;
    for(int i=0; i<100; i++) if(b[i] != d[i]) f=0;
    if(f) printf("ARE Brothers");
    else printf("NOT");
    
    return 0; 
}
