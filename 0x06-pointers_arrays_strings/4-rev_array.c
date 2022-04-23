/**
 * reverse_array - Reverses the content of an array of integers
 * @a - an array of integers
 * @n - the number of elements to swap
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
    int i;
    int b[100];
    for (i = 0; i < n; i++)
    {
        b[i] = a[n - i - 1];
    }
    for (i = 0; i < n; i++)
    {
        a[i] = b[i];
    }

    return (a);
}
