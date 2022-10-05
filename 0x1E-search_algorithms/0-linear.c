//A function that searches for a value in an array of integers

int linear_search(int *array, size_t size, int value)
{
    for ( i = 0; i <= size; i++)
    {
        if (array[i] == value)
        {
            printf("%d",array[i]);
            return i;
        }
        else if (array[i] != value)
        {
            printf("%d",array[i]);
        }
        else
        {
            return (-1);
            
        }
        
        
        
    }
    
    
    
    



}