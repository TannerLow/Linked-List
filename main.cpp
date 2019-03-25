#include "LinkedList.h"
#include <stdlib.h>

int main()
{
    LinkedList list;
    list.push(30);
    list.insert(50,0);
    list.insert(90,100);
    list.display();

    list.remove();
    list.display();
    list.remove(0);
    list.display();
    system("PAUSE");
    return 0;
}
