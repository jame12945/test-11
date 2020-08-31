/* C Program to Find Factors of a Number using While Loop */
//ให้ P(x) คือผลรวมตัวเลขตั้งแต่ 1..(x - 1) ที่หาร x ได้ลงตัว เช่น P(28) = 1 + 2 + 4 + 7 + 14 = 28 ให้ pass


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