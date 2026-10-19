#include <cstdio>

char* creerImage(int l, int h)
{
    char* img = new char[l * h];

    for (int i = 0; i < l * h; i++)
    {
        img[i] = ' ';
    }

    return img;
}

void detruireImage(char* img){
    delete[] img;
}

void point(char* img, int l, int h, int x, int y, char c){
    
    if (x < 0 || x >= l || y < 0 || y >= h) {
        return;
    }

    img[y * l + x] = c;
}

void afficher(const char* img, int l, int h)
{
    for (int y = 0; y < h; y++)
    {
        for (int x = 0; x < l; x++)
        {
            printf("%c", img[y * l + x]);
        }
        printf("\n");
    }
}

void cercle(char* img, int l, int h)
{
    int cx = l / 2;
 int cy = h / 2;

  int r = h / 2 - 1;

    for (int y = 0; y < h; y++){
        for (int x = 0; x < l; x++) {
            int dx = x - cx;
            int dy = y - cy;

            if (dx * dx + dy * dy <= r * r){
                point(img, l, h, x, y, '#');
            }
        }
    }
}

int main()
{
    char* img1 = creerImage(30, 10);

       cercle(img1, 30, 10);
    afficher(img1, 30, 10);

       detruireImage(img1);

            printf("\n");

    char* img2 = creerImage(80, 24);

        cercle(img2, 80, 24);
    afficher(img2, 80, 24);

    detruireImage(img2);

    return 0;
}