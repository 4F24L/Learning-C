// Oneful Pairs
// Chef defines a pair of positive integers (a,b) to be a Oneful Pair Oneful Pair, if 
// a + b + ( a ⋅ b ) = 111
// For example, (1,55) is oneful pair, since 1+55+(1⋅55)=56+55=111 .
// but (1,56) is not a pneful pair , since 1+56+(1⋅56)=57+56=113 != 111

// Given two positive integers a and b, output Yes if they are a Oneful Pair Oneful Pair. And No otherwise.

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    
    c = a + b + (a * b);
    if(c == 111){
        printf("Yes");
    } else {
        printf("No");
    }
    
    return 0;
    

}