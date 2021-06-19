#include "SLinkedList.h"
#include "DLinkedList.h"
#include "Point.h"
#include <iostream>

//UNCOMMENT the following WHENEVER completing the related data structures
/*

#include "test/SLinkedListSETest.h"
#include "test/DLinkedListTest.h"
#include "test/DLinkedListSETest.h"
#include "test/BSTTest.h"
#include "test/StackTest.h"
#include "test/QueueTest.h"
#include "test/HeapTest.h"
#include "test/PriorityQueueTest.h"
#include "test/XHashMapTest.h"
#include "test/SortTest.h"
#include "test/GraphTest.h"
#include "test/AVLTest.h"
*/

using namespace std;

void removeItemDataD(Point *p)
{
    delete p;
}

int main()
{
    SLinkedList<Point *> list(&SLinkedList<Point *>::free, &Point::pointEQ);

    list.add(new Point(1, 1));
    list.add(new Point(2, 2));
    list.add(new Point(3, 3));
    SLinkedList<Point *> list2(list);

    //Left one item will be delete by: DLinkedList<Point*>::free
    return 0;
}