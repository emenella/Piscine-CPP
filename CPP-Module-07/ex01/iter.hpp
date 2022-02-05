template<typename T>
void iter(T *array, int N, void (*f)(const T &))
{
    for (int i = 0; i < N; i++)
        f(array[i]);
}