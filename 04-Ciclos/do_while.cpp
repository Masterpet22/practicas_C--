/* La sentencia do while
    do
    {
         code
    } while ( condition );
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 10);

    system("pause");
    return 0;
}