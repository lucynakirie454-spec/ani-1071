#include <cstdio>
#include <cmath>

struct Vec2
{
    double x;
    double y;
};

Vec2 add(Vec2 a, Vec2 b)
{
    return {a.x + b.x, a.y + b.y};
}

Vec2 sub(Vec2 a, Vec2 b)
{
    return {a.x - b.x, a.y - b.y};
}

Vec2 scale(Vec2 a, double k)
{
    return {a.x * k, a.y * k};
}

double dot(Vec2 a, Vec2 b)
{
    return a.x * b.x + a.y * b.y;
}

double length(Vec2 a)
{
    return sqrt(dot(a, a));
}

Vec2 normalize(Vec2 a)
{
    double l = length(a);

    if (l == 0.0)
    {
        return {0.0, 0.0};
    }

    return scale(a, 1.0 / l);
}

Vec2 lerp(Vec2 a, Vec2 b, double t)
{
    return add(a, scale(sub(b, a), t));
}

Vec2 perp(Vec2 a)
{
    return {-a.y, a.x};
}

Vec2 rotate(Vec2 a, double angle)
{
    return {
        a.x * cos(angle) - a.y * sin(angle),
        a.x * sin(angle) + a.y * cos(angle)};
}

Vec2 reflect(Vec2 v, Vec2 n)
{
    return sub(v, scale(n, 2.0 * dot(v, n)));
}

double radians(double degres)
{
    return degres * M_PI / 180.0;
}

void afficherVec(const char* nom, Vec2 v)
{
    printf("%s = {%.10f, %.10f}\n", nom, v.x, v.y);
}

int main()
{
    printf("=== Les quatre verifications ===\n\n");

    printf("length({3,4}) = %.10f\n",
           length({3, 4}));

    printf("dot({1,0},{0,1}) = %.10f\n",
           dot({1, 0}, {0, 1}));

    Vec2 r = rotate({1, 0}, radians(90));
    afficherVec("rotate({1,0},90°)", r);

    Vec2 rebond = reflect({1, -1}, {0, 1});
    afficherVec("reflect({1,-1},{0,1})", rebond);

    printf("\n=== Mes essais ===\n\n");

    afficherVec(
        "add({1,2},{3,4})",
        add({1, 2}, {3, 4}));

    afficherVec(
        "sub({5,7},{2,3})",
        sub({5, 7}, {2, 3}));

    afficherVec(
        "scale({2,3},2)",
        scale({2, 3}, 2));

    afficherVec(
        "normalize({3,4})",
        normalize({3, 4}));

    afficherVec(
        "lerp({0,0},{10,20},0.5)",
        lerp({0, 0}, {10, 20}, 0.5));

    afficherVec(
        "perp({2,3})",
        perp({2, 3}));

    return 0;
}