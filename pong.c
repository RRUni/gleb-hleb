#include <stdio.h>

#define WIDTH 80
#define HEIGHT 25


void pole(int sc1, int sc2, int xs, int ys, int y_rocket1, int y_rocket2) {
    for (int i = 0; i < WIDTH; i++) 
        printf("-"); // Top

    for (int y = 0; y < HEIGHT; y++) {

        for (int x = 0; x < WIDTH; x++) {

            // TODO: checking rocket 1 & 2
            char symb;
            if ((x == 0) && (y_rocket1 <= y) && (y_rocket1 + 2 >= y)) {
                printf("|");
            }else if ((x == WIDTH) && (y_rocket2 <= y) && (y_rocket2 + 2 >= y)) {
                printf("|");
            }else if ((x == xs) && (y == ys)) {
                printf("@");
            }else if ((x == 37) && (y == 7)) {
                printf ("%d", sc1 / 10);
            }else if ((x == 38) && (y == 7)) {
                printf ("%d", sc1 % 10);
            
            }else if ((x == 43) && (y == 7)) {
                printf ("%d", sc2 / 10);
            }else if ((x == 44) && (y == 7)) {
                printf ("%d", sc1 % 10);
            }else{
                printf(" ");
            }
            
            
       
        }
        printf ("\n");


    }


    for (int i = 0; i < WIDTH ; i++)
        printf("-");
    printf("\n"); // bottom
}


// int sharik ( int x1, int y1, int y_rocket1, int y_rocket2){
//     int sc1;
//     int sc2;
    


//     while (sc1 < 21 || sc2 < 21){
        
//         if (y1 = 0){
//             if (x1 == 0 && (y1 == y_rocket1 || y1 == y_rocket1 + 1 || y1 == y_rocket1 + 2 )) {
//                 for (x1 = WIDTH / 2; x1 <= WIDTH || y1 <= HEIGHT; x1++, y1++){
//                 }
//             }
//             if (x1 == WIDTH  && (y1 == y_rocket2 || y1 == y_rocket2 + 1 || y1 == y_rocket2 + 2 )) {
//                 for ( ; x1 != 0 || x1 <= WIDTH || y1 <= HEIGHT; x1--, y1++ ){
//             } 
//             }   
//         } 
//         if (y1 = HEIGHT){
//             if (x1 == 0 && (y1 == y_rocket1 || y1 == y_rocket1 + 1 || y1 == y_rocket1 + 2 )) {
//                 for ( ; x1 <= WIDTH || y1 <= 0; x1++, y1--){
//                 }
//             }
//             if (x1 == WIDTH  && (y1 == y_rocket2 || y1 == y_rocket2 + 1 || y1 == y_rocket2 + 2 )) {
//                 for ( ; x1 != 0 || x1 <= WIDTH ||y1 <= 0; x1--, y1--){
//                 } 
//             }
//         }
//     }
// }






int main() {
    int sc1 = 0;
    int sc2 = 0;
    int xs=0;
    int ys=0;
    int y_rocket1 = 5;
    int y_rocket2 = 5;
    printf("0");
    do {
        printf("huyhuy");
        pole(sc1, sc2, xs, ys, y_rocket1, y_rocket2);
        printf("2");
        // scanf("%d %d %d %d %d %d", &sc1, &sc2, &xs, &ys, &y_rocket1, &y_rocket2);
            while (sc1 < 21 || sc2 < 21){
                // printf("%d", ys);
                
                if (ys == HEIGHT){
                    if (xs == 0 ) {
                        for ( ; xs < WIDTH && ys < 0; xs++, ys--){
                        }
                    }
                    if (xs == WIDTH ) {
                        for ( ; xs != 0 || xs < WIDTH && ys < 0; xs--, ys--){
                        } 
                    }
                }
                if (ys == 0){
                    printf("4");
                    if (xs == 0 ) {
                        printf("good");
                        for (; xs < WIDTH && ys < HEIGHT; xs++, ys++){
                        }
                        printf("%d %d", xs, ys);

                    }
                    if (xs == WIDTH ) {
                        for ( ; xs != 0 || xs < WIDTH && ys < HEIGHT; xs--, ys++ ){
                    } 
                    }   
                } 
            }

    }
    while (sc1 < 21 && sc2 < 21);

    if (sc1 >= 21) {
       printf("pobedil igrok 1\n"); 
    }
    if (sc2 >= 21) {
       printf("pobedil igrok 2\n"); 
    }
    
    return 0;
}
