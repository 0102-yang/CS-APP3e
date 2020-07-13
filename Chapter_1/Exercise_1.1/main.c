/*
 * @Brief: Exercise 1.1
 * @Author: Yang
 * @Date: 2020-07-12 22:22:13
 * @Copyrights: Yang
 * @Email: 1657375983@qq.com
 * @Version: 1.0
 * @LastEditTime: 2020-07-13 20:20:24
 */
/*
Exercise 1.1
Imagine you were a truck driver who will transport potatoes from Boise, Idaho to
Minneapolis, Minnesota. It is 2,500 kilometers. Within the speed limit, you
estimate the average speed to the 100 kilometers per hour. The whole trip takes
25 hours.
*A: Did you hear on the news that the speed limit has just been
abolished in Montana, which allows trucks to travel at 150 kilometers per hour
for 1,500 kilometers? So what is the acceleration ratio for the whole trip?
*B: You can buy a new turbocharger for your truck at www.fasttrucks.com. Various
models are available from stock, but the faster the speed, the higher the price.
If you want to speed up the whole trip is 1.67×, so how fast do you need to go
through Montana?
*/
#include <stdio.h>

int main() {
    double a = 0.6;
    double k = 1.5;
    double S = 1 / ((1 - a) + a / k);
    printf("The acceleration ratio is %.2lf×\n", S); /*1.25x*/

    return 0;
}