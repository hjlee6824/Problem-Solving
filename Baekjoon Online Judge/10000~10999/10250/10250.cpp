#include <cstdio>

int main()
{
    int t;
    scanf("%d", &t);

    int h, w, n;
    int heightOfNRoom, widthOfNRoom;

    for (int i = 0; i < t; ++i)
    {
        scanf("%d %d %d", &h, &w, &n);

        if (n % h == 0)
        {
            widthOfNRoom = (n / h);
            heightOfNRoom = h;
        }
        else
        {
            widthOfNRoom = (n / h) + 1;
            heightOfNRoom = n % h;
        }
        
        printf("%d%02d\n", heightOfNRoom, widthOfNRoom);
    }

    return 0;
}