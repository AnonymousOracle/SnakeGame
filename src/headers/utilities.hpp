template <class T>
void matrix_copy(T src, T dest, int dimension)
{
    for (int y = 0; y < dimension; y++)
    {
        for (int x = 0; x < dimension; x++)
        {
            dest[y][x] = src[y][x];
        }
    }
}