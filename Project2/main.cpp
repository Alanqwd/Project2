#include <iostream>
int main()
{
    //������� 1 
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

    std::cout << "����������� �������: " << min << "\n";
    std::cout << "������������ �������: " << max ;
    */
    //������� 3
    /*
    int profit[12];
    int startMonth, endMonth;
    int maxProfit = 0, minProfit = INT_MAX;
    int maxMonth, minMonth;

   
     
        for (int i = 0; i < 12; ++i) 
        {
            std::cout << "������� ������� �� " << i + 1 << " �����: ";
            std::cin >> profit[i];
        }

 
    std::cout << "������� ��������� � �������� ������ ���������: ";
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

    std::cout << "������������ ������� " << maxProfit << " ���� � " << maxMonth << " ������." << "\n";
    std::cout << "����������� ������� " << minProfit << " ���� � " << minMonth << " ������.";
    */
    //������� 2
    /*
        int n, lower_bound, sum = 0;
        std::cout << "������� ������ �������: ";
        std::cin >> n;
        int* arr = new int[n];
        std::cout << "������� ������ ������� ���������: ";
        std::cin >> lower_bound;
        std::cout << "������: ";
        for (int i = 0; i < n; i++) 
        {
            arr[i] = rand() % 100; 
            std::cout << arr[i] << " ";

            if (arr[i] < lower_bound) 
            {
                sum += arr[i];
            }
        }

        std::cout << "\n����� ��������� �������, �������� ������� ������ " << lower_bound << ": " << sum << "\n";
        */


	return 0;
}