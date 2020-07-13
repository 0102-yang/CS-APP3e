/*
 * @Brief:
 * @Author: Yang
 * @Date: 2020-07-13 19:41:24
 * @Copyrights: Yang
 * @Email: 1657375983@qq.com
 * @Version:
 * @LastEditTime: 2020-07-13 20:19:57
 */
/*
Exercise 1.2
The marketing department has made a promise to your client that the next
software performance for the next version will be updated to 2x. The task
is allocated to you. You are already sure that only 80% of system can be
improved, so, how much is this part needs to be improved to achieve the
overall performance goal?
*/
#include <stdio.h>
int main() {
    double a = 0.8;
    double S = 2.0;
    double k = (a * S) / (1 - S * (1 - a));
    printf("The k is %.2lf\n", k); /*2.67*/

    return 0;
}