
bool is_reverese_sorted(int n, int arr[])
{

    if (n == 0 || n == 1){

    return true;

    }

    for (int i = 1; i < n; i++){

        if (arr[i - 1] < arr[i]){
         return false;
        }

    }

    return true;
}














    void main ()
    {

        int number[30];

        int i, j, a, n;
        printf("Enter the value of N\n");
        scanf("%d", &n);

        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
	        scanf("%d", &number[i]);

        /*  sorting begins ... */

        for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] < number[j])
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }

        printf("The numbers arranged in descending order are given below\n");

        for (i = 0; i < n; ++i)
        {
            printf("%d\n", number[i]);
        }

    }
