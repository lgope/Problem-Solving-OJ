
#include<stdio.h>
int main()
{
    float salary, n_salary, m_earn;
    int percentice;
    scanf("%f", &salary);
    if(salary > 0 && salary <= 400.00)
    {
        percentice = 15;
        m_earn = salary * 15.00 / 100;
    }
    else if(salary > 400.00 && salary <= 800.00)
    {
        percentice = 12;
        m_earn = salary * 12.00 / 100;
    }
    else if(salary > 800.00 && salary <= 1200.00)
    {
        percentice = 10;
        m_earn = salary * 10.00 / 100;
    }
    else if(salary > 1200.00 && salary <= 2000.00)
    {
        percentice = 7;
        m_earn = salary * 7.00 / 100;
    }
    else
    {
        percentice = 4;
        m_earn = salary * 4.00 / 100;
    }
    n_salary = salary + m_earn;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n", n_salary, m_earn, percentice, '%');
    return 0;
}
