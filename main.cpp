#include <cstdio>

template <class T>
T ArrayGetAt(T array[], int index)
{
        index--;
        return array[index];
}

int main()
{
        int array[3] = {1, 2, 3};
        int first = ArrayGetAt<int>(array, 1);
        printf("%d\n", first);
        return 0;
}
