#include <iostream>
int main()
{
    //Задание 1 
    setlocale(LC_ALL, "ru");
    /*
    const int size = 10;
    int arr[size];
    int min = 0;
    int max = 0;

    for (int i = 0; i < size; i++) 
    {
        arr[i] = rand() % 100;
        std::cout << arr[i] << " " << "\n";
    }

    for (int i = 1; i < size; i++) 
    {
        if (arr[i] < min) 
        {
            min = arr[i];
        }
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }

    std::cout << "Минимальный элемент: " << min << "\n";
    std::cout << "Максимальный элемент: " << max ;
    */
    //Задание 3
    /*
    int profit[12];
    int startMonth, endMonth;
    int maxProfit = 0, minProfit = INT_MAX;
    int maxMonth, minMonth;

   
     
        for (int i = 0; i < 12; ++i) 
        {
            std::cout << "Введите прибыль за " << i + 1 << " месяц: ";
            std::cin >> profit[i];
        }

 
    std::cout << "Введите начальный и конечный месяцы диапазона: ";
    std::cin >> startMonth >> endMonth;

   
    for (int i = startMonth - 1; i < endMonth; ++i) 
    {
        if (profit[i] > maxProfit) 
        {
            maxProfit = profit[i];
            maxMonth = i + 1;
        }
        if (profit[i] < minProfit) 
        {
            minProfit = profit[i];
            minMonth = i + 1;
        }
    }

    std::cout << "Максимальная прибыль " << maxProfit << " была в " << maxMonth << " месяце." << "\n";
    std::cout << "Минимальная прибыль " << minProfit << " была в " << minMonth << " месяце.";
    */
    //Задание 2
    /*
        int n, lower_bound, sum = 0;
        std::cout << "Введите размер массива: ";
        std::cin >> n;
        int* arr = new int[n];
        std::cout << "Введите нижнюю границу диапазона: ";
        std::cin >> lower_bound;
        std::cout << "Массив: ";
        for (int i = 0; i < n; i++) 
        {
            arr[i] = rand() % 100; 
            std::cout << arr[i] << " ";

            if (arr[i] < lower_bound) 
            {
                sum += arr[i];
            }
        }

        std::cout << "\nСумма элементов массива, значения которых меньше " << lower_bound << ": " << sum << "\n";
        */


	return 0;
}