
template <class T>
void swap(T &element1, T &element2)
{
    T temp(element1);
    element1 = element2;
    element2 = temp;
}

template <class T>
T min(T element1, T element2)
{
    if (element1 < element2)
        return(element1);
    else
        return (element2);
}

template <class T>
T max(T element1, T element2)
{
    if (element1 > element2)
        return(element1);
    else
        return (element2);
}