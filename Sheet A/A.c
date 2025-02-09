#include <stdio.h> 

void fileIO() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
int main(){
    fileIO();
    char name[100]; 
    scanf("%s", &name);
    printf("Hello, %s", name);

    
    return 0; 
}
