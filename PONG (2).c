#include <stdio.h>

#define WIDTH 80
#define HEIGHT 25

void pole(int sc1, int sc2, int xs, int ys, int y_rocket1, int y_rocket2)
{
    printf("\e[1;1H\e[2J");
    for (int i = 0; i < WIDTH; i++)
        printf("-"); // Top

    for (int y = 0; y < HEIGHT; y++)
    {

        for (int x = 0; x < WIDTH; x++)
        {

            // TODO: checking rocket 1 & 2
            char symb;
            if ((x == 2) && (y_rocket1 <= y) && (y_rocket1 + 2 >= y))
            {
                printf("|");
            }
            else if ((x == WIDTH - 1) && (y_rocket2 <= y) && (y_rocket2 + 2 >= y))
            {
                printf("|");
            }
            else if ((x == xs) && (y == ys))
            {
                printf("@");
            }
            else if ((x == 37) && (y == 7))
            {
                printf("%d", sc1 / 10);
            }
            else if ((x == 38) && (y == 7))
            {
                printf("%d", sc1 % 10);
            }
            else if ((x == 43) && (y == 7))
            {
                printf("%d", sc2 / 10);
            }
            else if ((x == 44) && (y == 7))
            {
                printf("%d", sc2 % 10);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < WIDTH; i++)
        printf("-");
    printf("\n"); // bottom
}

// ___________________RAZVRATNIE IGOR I STEPA_________________________
int igor(int sc1, int sc2, int xs, int ys, int y_rocket1, int y_rocket2, int dx)
{
    if ( xs == 2 && ( ys >= y_rocket1 && ys <= y_rocket1 + 2 )) {
        dx = 1;
    }
    if (xs == WIDTH - 1 && (ys >= y_rocket2 && ys <= y_rocket2 + 2)) {
        dx = -1;
    }
    return dx;
}

int stepa(int ys, int dy)
{

    if (ys == HEIGHT - 1 || ys == 1)
    {
        dy = dy * (-1);
    }
    return dy;
}
// ___________________________________________________________________

// _________________DVIJOVIE NEKIT I DIMAS____________________________
int nekit(int y_rocket1)
{
    char k1;
    scanf("%c", &k1);
    if (k1 == 'a')
    {
        y_rocket1 = y_rocket1 - 1;
    }
    if (k1 == 'z')
    {
        y_rocket1 = y_rocket1 + 1;
    }
    if (y_rocket1 <= 2) {
    y_rocket1 = 2
    }
    if (y_rocket1 >=  HEIGHT - 3) {
    y_rocket1 = HEIGHT - 3;
    }
    return y_rocket1;
}

int dimas(int y_rocket2)
{
    char k2;
     scanf("%c", &k2);
    if (k2 == 'k')
    {
        y_rocket2 = y_rocket2 - 1;
    }
    if (k2 == 'm')
    {
        y_rocket2 = y_rocket2 + 1;
    }
    return y_rocket2;
    if (y_rocket2 <= 2) {
    y_rocket2 = 2
    }
    if (y_rocket2 >=  HEIGHT - 3) {
    y_rocket2 = HEIGHT - 3;
    }
}

//  _____________CHETKIE KATYA I MASHA_______________

int katya(int xs, int sc1)
{
    if (xs == 1)
    {
        sc1 = sc1 + 1;
    }
    return sc1;
}

int masha(int xs, int sc2)
{
    if (xs == WIDTH )
    {
        sc2 = sc2 + 1;
    }
    return sc2;
}

// ___________________________________________________

//_____________UBORSHICA PETROVNA______________________

int PETROVNA( int xs) {
    if (xs <= 1 || xs >= WIDTH) {
    xs = WIDTH / 2;
    }
}
//____________________________________________________

//_____TUSA JUSA_________________________________
int main()
{
    int sc1 = 0;
    int sc2 = 0;
    int xs = WIDTH / 2;
    int ys = HEIGHT / 2;
    int y_rocket1 = 5;
    int y_rocket2 = 5;
    int dx = 1;
    int dy = 1;
    int speed = 1;

    while (sc1 <= 21 && sc2 <= 21)
    {
        dx = igor(sc1, sc2, xs, ys, y_rocket1, y_rocket2, dx); 
        xs = xs + speed * dx;
        dy = stepa(ys, dy);
        ys = ys + speed * dy;
        y_rocket1 = nekit (y_rocket1);
        y_rocket2 = dimas (y_rocket2);
        sc1 = katya (xs, sc1);
        sc2 = masha (xs, sc2);
        pole(sc1, sc2, xs, ys, y_rocket1, y_rocket2);
    }
}
//___________________THE END? _________________________