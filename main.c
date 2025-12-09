#include <stdio.h>
#include <math.h>



typedef struct {
    int players;
    int matches;
} firstline;



int main(){
    firstline input1;
    printf("Enter amount of compet. then amount of matches like this(4 4): ");
    scanf_s("%d %d", &input1.players, &input1.matches);
    int points[10] = {256,256,256,256,256,256,256,256,256,256};
while (1) {
    /* code */
    for(int count=0; count < input1.matches;count++) {
        printf("\nenter points: ");
        scanf("%d", points[count]);
    };

    for(int count = 0; count < input1.matches;count++) {
        
    }
    
}




  


    printf("\n\n\n\n\n\n\n\n");
    return 0;
}