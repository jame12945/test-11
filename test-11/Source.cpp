/* C Program to Find Factors of a Number using While Loop */
//��� P(x) ��ͼ��������Ţ����� 1..(x - 1) ������ x ��ŧ��� �� P(28) = 1 + 2 + 4 + 7 + 14 = 28 ��� pass


#include <stdio.h>
int yo();
int a, sum = 0, Number, i = 1;
int yo()
{
    

    printf("\n Please Enter number to Find Factors\n");
    scanf_s("%d", &Number);//28

    printf("\n The Factors of a Number are:\n");
    
    while (i<Number)
    {
        if (Number % i == 0 )
        {
            printf("%d  ", i);
            sum = sum + i;
        }
        i++;
        
    }
    printf("\n\nSum of all value factor is %d  ", sum);
    
    return sum;
}
int main() {
    
    yo();

}