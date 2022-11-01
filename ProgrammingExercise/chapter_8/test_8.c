// 8.编写一个程序，显示一个提供加法、减法、乘法、除法的菜单。获得
// 用户选择的选项后，程序提示用户输入两个数字，然后执行用户刚才选择的
// 操作。该程序只接受菜单提供的选项。程序使用float类型的变量储存用户输
// 入的数字，如果用户输入失败，则允许再次输入。进行除法运算时，如果用
// 户输入0作为第2个数（除数），程序应提示用户重新输入一个新值。该程序
// 的一个运行示例如下：

// Enter　the　operation　of　your　choice:
// a.　add　　　　　　　 s.　subtract
// m.　multiply　　　　 d.　divide
// q.　quit
// a
// Enter　first　number:　22　.4
// Enter　second　number:　one
// one　is　not　an　number.
// Please　enter　a　number,　such　as　2.5,　-1.78E8,　or　3:　1
// 22.4　+　1　=　23.4
// Enter　the　operation　of　your　choice:
// a.　add　　　　　　　　s.　subtract
// m.　multiply　　　　 d.　divide
// q.　quit
// d
// Enter　first　number:　18.4
// Enter　second　number:　0
// Enter　a　number　other　than　0:　0.2
// 18.4　/　0.2　=　92
// Enter　the　operation　of　your　choice:
// a.　add　　　　　　　　s.　subtract
// m.　multiply　　　　 d.　divide
// q.　quit
// q
// Bye.
#include <stdio.h>
#include <ctype.h>

int get_first(void);
void print_menu(void);
float get_num(void);

int main(void)
{
    int operation;
    float num1, num2;
    print_menu();
    while ((operation = get_first()) != 'q')
    {
        printf("Enter first number: ");
        num1 = get_num();
        printf("Enter second number: ");
        num2 = get_num();

        switch (operation)
        {
        case ('a'):
            printf("%.3f + %.3f = %.3f\n", num1, num2, num1 + num2);
            break;
        case ('s'):
            printf("%.3f - %.3f = %.3f\n", num1, num2, num1 - num2);
            break;
        case ('m'):
            printf("%.3f * %.3f = %.3f\n", num1, num2, num1 * num2);
            break;
        case ('d'):
            while (num2 == 0)
            {
                printf("Enter a number other than 0: ");
                num2 = get_num();
            }
            printf("%.3f / %.3f = %.3f\n", num1, num2, num1 / num2);
            break;
        default:
            printf("I don't recognize that input, Try again.");
        }
        print_menu();
    }
}

int get_first(void)
{
    int ch;
    do
    {
        ch = getchar();
    } while (isspace(ch));
    while (getchar() != '\n')
        ;
    return ch;
}

void print_menu(void)
{
    printf("Enter　the　operation　of　your　choice: \n");
    printf("a. add\ts. subtract\n");
    printf("m. multiply\td. divide\n");
    printf("q. quit\n");
}

float get_num(void)
{
    int ch;
    float num;
    while ((scanf("%f", &num)) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not a number.\n");
        printf("Please enter a number, such as 2.5,-1.78E8, or 3: ");
    }
    return num;
}