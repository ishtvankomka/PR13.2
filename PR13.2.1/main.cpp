#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;
#define z 2

#define INPUT(x) cin >> x //ввід
#define PRINT(str) cout << (str) //вивід
#define ENDL cout << endl //новий рядок

#define SQUARE(x) ((x)*(x)) //квадрат

#define MIN(x, y) (((x)<(y))?(x):(y)) //мінімум
#define MAX(x, y) (((x)>(y))?(x):(y)) //максимум

int main()
{
    double x, y, w;
    //користувач вводить значення змінних
    PRINT("x = "); INPUT(x);
    PRINT("y = "); INPUT(y);
    PRINT("z = "); PRINT(z); ENDL;
    
    //обчислення функції
#if z>0 && z<5
    w = MIN(SQUARE(x)+y+z, x*y*z);
#elif z<=0 || z>=5
    w = MAX(SQUARE(x)+SQUARE(y+z), x*y);
#endif
    
    //вивід результатів обчислення
    PRINT("w = "); PRINT(w); ENDL;
}
