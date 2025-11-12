#include<iostream>
#include"input.h"
#include"MaxHeap.h"
#include"MinHeap.h"
using namespace std;

void HeapMenu();
void maxHeap();
void minHeap();

int main() {
	do {
        system("cls");
        cout << "\n\t\tCMPR131 Chapter 11: Heaps by Khang Quach, Thi Ho, Thi Pham";
        cout << "\n\t\t" << string(70, char(205));
        cout << "\n\t\t\t1> Heap using vector";
        cout << "\n\t\t\t2> Union and intersect of heaps";
        cout << "\n\t\t\t3> Heap in C++ STL";
        cout << "\n\t\t" << string(70, char(196));
        cout << "\n\t\t\t0> Exit";
        cout << "\n\t\t" << string(70, char(205)) << '\n';
        switch (inputInteger("\t\t\tOption: ", 0, 3))
        {
        case 0: exit(1);
        case 1: HeapMenu();  break;
        case 2:  break;
        case 3:
        {

        }
        break;
        default: cout << "\n\tERROR: invalud option.\n";
        }

        cout << "\n\n";
        system("pause");

	} while (true);
}

void HeapMenu() {
    do {
        system("cls");
        cout << "\n\t\t 1> Heap using vector";
        cout << "\n\t\t" << string(70, char(205));
        cout << "\n\t\t\tA> Min heap";
        cout << "\n\t\t\tB> Max heap";
        cout << "\n\t\t" << string(70, char(196));
        cout << "\n\t\t\t0> Exit";
        cout << "\n\t\t" << string(70, char(205)) << '\n';

        switch (toupper(inputChar("\n\t\tOption: ", static_cast<string>("ABC0"))))
        {
        case '0': return;
        case 'A': minHeap(); break;
        case 'B': maxHeap(); break;
        default: cout << "\n\tERROR: invalud option.\n";
        }

        cout << "\n\n";
        system("pause");
    } while (true);
   
   
}

void maxHeap() {
    MaxHeap<int> max;
    do {
        system("cls");
        cout << "\n\t\t A> Max Heap";
        cout << "\n\t\t" << string(70, char(205));
        cout << "\n\t\t\t1. size";
        cout << "\n\t\t\t2. empty";
        cout << "\n\t\t\t3. push";
        cout << "\n\t\t\t4. front";
        cout << "\n\t\t\t5. pop";
        cout << "\n\t\t\t6. display";
        cout << "\n\t\t" << string(70, char(196));
        cout << "\n\t\t\t0> Exit";
        cout << "\n\t\t" << string(70, char(205)) << '\n';

        switch (inputInteger("\t\t\tOption: ", 0, 6))
        {
        case 0: return;
        case 1:
            cout << "\n\t\tSize of the heap: " << max.size();
            break;
        case 2:
        {
            if (max.empty())
            {
                cout << "\n\t\tThe heap is empty.";
            }
            else
            {
                cout << "\n\t\tThe heap is not empty.";
            }
            break;
        }
        case 3:
        {
            int value = inputInteger("\n\t\tEnter an integer element to push onto the heap: ");
            while (max.find(value))
            {
                cout << "ERROR: the element, " << value << ", already existed in the heap. Please re-specify.\n";
                value = inputInteger("\n\t\tEnter an integer element to push onto the heap: ");
            }
            max.push(value);
            break;
        }
            
        case 4:
            cout << "\n\t\tThe first element of the heap: " << max.front();
            break;
        case 5: 
            if (max.empty())
            {
                cout << "\n\t\tThe heap is empty.";
                break;
            }
            max.pop();
            cout << "\n\t\tThe first element of the heap has been removed.";
            break;
        case 6:
            if (max.empty())
            {
                cout << "\n\t\tThe heap is empty.";
            }
            cout << "\n\t\t" << max;
            break;
        default: cout << "\n\t\tERROR: invalud option.\n";
        }

        cout << "\n\n";
        system("pause");
    } while (true);
}

void minHeap() {
    MinHeap<int> min;
    do {
        system("cls");
        cout << "\n\t\t A> Min Heap";
        cout << "\n\t\t" << string(70, char(205));
        cout << "\n\t\t\t1. size";
        cout << "\n\t\t\t2. empty";
        cout << "\n\t\t\t3. push";
        cout << "\n\t\t\t4. front";
        cout << "\n\t\t\t5. pop";
        cout << "\n\t\t\t6. display";
        cout << "\n\t\t" << string(70, char(196));
        cout << "\n\t\t\t0> Exit";
        cout << "\n\t\t" << string(70, char(205)) << '\n';

        switch (inputInteger("\t\t\tOption: ", 0, 6))
        {
        case 0: return;
        case 1:
            cout << "\n\t\tSize of the heap: " << min.size();
            break;
        case 2:
        {
            if (min.empty())
            {
                cout << "\n\t\tThe heap is empty.";
            }
            else
            {
                cout << "\n\t\tThe heap is not empty.";
            }
            break;
        }
        case 3:
        {
            int value = inputInteger("\n\t\tEnter an integer element to push onto the heap: ");
            while (min.find(value))
            {
                cout << "ERROR: the element, " << value << ", already existed in the heap. Please re-specify.\n";
                value = inputInteger("\n\t\tEnter an integer element to push onto the heap: ");
            }
            min.push(value);
            break;
        }

        case 4:
            cout << "\n\t\tThe first element of the heap: " << min.front();
            break;
        case 5:
            if (min.empty())
            {
                cout << "\n\t\tThe heap is empty.";
                break;
            }
            min.pop();
            cout << "\n\t\tThe first element of the heap has been removed.";
            break;
        case 6:
            if (min.empty())
            {
                cout << "\n\t\tThe heap is empty.";
            }
            cout << "\n\t\t" << min;
            break;
        default: cout << "\n\t\tERROR: invalud option.\n";
        }

        cout << "\n\n";
        system("pause");
    } while (true);
}

void UnionAndIntersect() {
    do {
        system("cls");
        cout << "\n\t\t2> Union and intersect heap";
        cout << "\n\t\t" << string(70, char(205));
        cout << "\n\t\t\tA> Union two max Heaps";
        cout << "\n\t\t\tB> Intersect two max Heaps";
        cout << "\n\t\t\tC> Union two min Heaps";
        cout << "\n\t\t\tD> Intersect two min Heaps";
        cout << "\n\t\t" << string(70, char(196));
        cout << "\n\t\t\t0> Exit";
        cout << "\n\t\t" << string(70, char(205)) << '\n';

        switch (toupper(inputChar("\n\t\tOption: ", static_cast<string>("ABCD0"))))
        {
        case '0': return;
        case 'A':
        {
            break;
        }
        case 'B': break;
        case 'D': break;
        default: cout << "\n\tERROR: invalud option.\n";
        }

        cout << "\n\n";
        system("pause");
    } while (true);

}