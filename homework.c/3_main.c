// 202610125217
// 肖承祥

#include <stdio.h>

struct Window {
    int buffer[3];
    int count;
};

struct Window push_data(struct Window win, int val)
{
    win.buffer[win.count % 3] = val;
    win.count++;
    return win;
}

int get_average(struct Window win)
{
    int i, sum = 0;
    int num = win.count < 3 ? win.count : 3;

    for (i = 0; i < num; i++)
        sum += win.buffer[i];
    return sum / num;
}

int main(void)
{
    struct Window w;
    int m, i, v;

    w.count = 0;
    w.buffer[0] = w.buffer[1] = w.buffer[2] = 0;

    if (scanf("%d", &m) != 1) return 0;

    for (i = 0; i < m; i++) {
        if (scanf("%d", &v) != 1) return 0;
        w = push_data(w, v);
        if (i > 0) printf(" ");
        printf("%d", get_average(w));
    }
    printf("\n");
    return 0;
}