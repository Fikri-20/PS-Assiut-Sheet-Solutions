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

    char ch; 
    scanf("%c", &ch);
    //printf("%c", ch);
    if(ch >= 'a' && ch <= 'z') printf("ALPHA\nIS SMALL");
    else if(ch >= 'A' && ch <= 'Z') printf("ALPHA\nIS CAPITAL");
    else printf("IS DIGIT");

    return 0; 
}
