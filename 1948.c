#include <stdio.h>
#include <math.h>

int deliteli ( int x1 ){
    int res = 0;
    for (int i = 2; i <= x1 ; i++){
        int num = x1;
        while (num > 0) {
            num = num - i;   
        }
        if (num == 0) {
            res = i;
            printf("%d ", res);
        }
    }
    return res;
}

int delenie ( int x1, int i ) {
    int num = x1;
    int c = 0;
    int rez;
    while (num > 0) {
        num = num - i; 
        c++;
    }

    if (num == 0) {
        rez = c;
    } else {
        rez = x1;
    }
}

int main () {
    int num;
    int x1;
    int deli;
    int i=2;
    int prev_x1;
    scanf("%d", &num);
    x1 = num;

    for (i=2; i <= x1; i++) 
    {
        do 
        {
            deli = delenie(x1, i);
            printf("%d / %d = %d\n", x1, i, deli);
            if (x1 == deli) { 
                break;
            }
            x1 = deli;
            
        }
        while (prev_x1 != deli);   
    }
    printf("%d\n", i); 
    printf("%d\n", i - 1);    
        
}
    
    
