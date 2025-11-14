#include<iostream>
#include"input.h"
#include"MaxHeap.h"
#include"MinHeap.h"
using namespace std;

void HeapMenu();
void maxHeap();
void minHeap();
void UnionAndIntersect();

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
        case 2: UnionAndIntersect(); break;
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

void minHeap()
{
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


void UnionAndIntersect()
{
    do {
        system("cls");
        cout << "\n\t\t2> Union and intersect heap";
        cout << "\n\t\t" << string(70, char(205));
        cout << "\n\t\t\tA> Union two max Heaps (random)";
        cout << "\n\t\t\tB> Intersect two max Heaps (random)";
        cout << "\n\t\t\tC> Union two min Heaps (random)";
        cout << "\n\t\t\tD> Intersect two min Heaps (random)";
        cout << "\n\t\t" << string(70, char(196));
        cout << "\n\t\t\t0> Exit";
        cout << "\n\t\t" << string(70, char(205)) << '\n';

        switch (toupper(inputChar("\n\t\tOption: ", static_cast<string>("ABCD0"))))
        {
        case '0':
            return;

            // =========================
            // A) UNION OF TWO MAX HEAPS (FULLY RANDOM)
            // =========================
        case 'A':
        {
            MaxHeap<int> h1, h2;

            int n1 = rand() % 8 + 3;   // size 3..10
            int n2 = rand() % 8 + 3;   // size 3..10

            // random fill first heap
            for (int i = 0; i < n1; ++i)
            {
                int value;
                do {
                    value = rand() % 100 + 1;   // 1..100
                } while (h1.find(value));        // unique within h1
                h1.push(value);
            }

            // random fill second heap
            for (int i = 0; i < n2; ++i)
            {
                int value;
                do {
                    value = rand() % 100 + 1;
                } while (h2.find(value));        // unique within h2
                h2.push(value);
            }

            MaxHeap<int> uni = h1;
            MaxHeap<int> temp = h2;

            while (!temp.empty())
            {
                int x = temp.front();
                temp.pop();
                if (!uni.find(x))
                    uni.push(x);
            }

            cout << "\n\t\tFIRST max heap (size = " << n1 << "): ";
            if (h1.empty()) cout << " (empty)";
            else cout << "\n\t\t" << h1;

            cout << "\n\n\t\tSECOND max heap (size = " << n2 << "): ";
            if (h2.empty()) cout << " (empty)";
            else cout << "\n\t\t" << h2;

            cout << "\n\n\t\tUNION (max heap): ";
            if (uni.empty()) cout << " (empty)";
            else cout << "\n\t\t" << uni;

            break;
        }

        // ==============================
        // B) INTERSECTION OF TWO MAX HEAPS (FULLY RANDOM)
        // ==============================
        case 'B':
        {
            MaxHeap<int> h1, h2;

            int n1 = rand() % 8 + 3;   // 3..10
            int n2 = rand() % 8 + 3;   // 3..10

            // random fill first heap
            for (int i = 0; i < n1; ++i)
            {
                int value;
                do {
                    value = rand() % 100 + 1;
                } while (h1.find(value));
                h1.push(value);
            }

            // random fill second heap
            for (int i = 0; i < n2; ++i)
            {
                int value;
                do {
                    value = rand() % 100 + 1;
                } while (h2.find(value));
                h2.push(value);
            }

            MaxHeap<int> inter;
            MaxHeap<int> temp = h1;

            while (!temp.empty())
            {
                int x = temp.front();
                temp.pop();
                if (h2.find(x) && !inter.find(x))
                    inter.push(x);
            }

            cout << "\n\t\tFIRST max heap (size = " << n1 << "): ";
            if (h1.empty()) cout << " (empty)";
            else cout << "\n\t\t" << h1;

            cout << "\n\n\t\tSECOND max heap (size = " << n2 << "): ";
            if (h2.empty()) cout << " (empty)";
            else cout << "\n\t\t" << h2;

            cout << "\n\n\t\tINTERSECTION (max heap): ";
            if (inter.empty()) cout << " (empty)";
            else cout << "\n\t\t" << inter;

            break;
        }

        // =========================
        // C) UNION OF TWO MIN HEAPS (FULLY RANDOM)
        // =========================
        case 'C':
        {
            MinHeap<int> h1, h2;

            int n1 = rand() % 8 + 3;   // 3..10
            int n2 = rand() % 8 + 3;   // 3..10

            // random fill first heap
            for (int i = 0; i < n1; ++i)
            {
                int value;
                do {
                    value = rand() % 100 + 1;
                } while (h1.find(value));
                h1.push(value);
            }

            // random fill second heap
            for (int i = 0; i < n2; ++i)
            {
                int value;
                do {
                    value = rand() % 100 + 1;
                } while (h2.find(value));
                h2.push(value);
            }

            MinHeap<int> uni = h1;
            MinHeap<int> temp = h2;

            while (!temp.empty())
            {
                int x = temp.front();
                temp.pop();
                if (!uni.find(x))
                    uni.push(x);
            }

            cout << "\n\t\tFIRST min heap (size = " << n1 << "): ";
            if (h1.empty()) cout << " (empty)";
            else cout << "\n\t\t" << h1;

            cout << "\n\n\t\tSECOND min heap (size = " << n2 << "): ";
            if (h2.empty()) cout << " (empty)";
            else cout << "\n\t\t" << h2;

            cout << "\n\n\t\tUNION (min heap): ";
            if (uni.empty()) cout << " (empty)";
            else cout << "\n\t\t" << uni;

            break;
        }

        // ==============================
        // D) INTERSECTION OF TWO MIN HEAPS (FULLY RANDOM)
        // ==============================
        case 'D':
        {
            MinHeap<int> h1, h2;

            int n1 = rand() % 8 + 3;   // 3..10
            int n2 = rand() % 8 + 3;   // 3..10

            // random fill first heap
            for (int i = 0; i < n1; ++i)
            {
                int value;
                do {
                    value = rand() % 100 + 1;
                } while (h1.find(value));
                h1.push(value);
            }

            // random fill second heap
            for (int i = 0; i < n2; ++i)
            {
                int value;
                do {
                    value = rand() % 100 + 1;
                } while (h2.find(value));
                h2.push(value);
            }

            MinHeap<int> inter;
            MinHeap<int> temp = h1;

            while (!temp.empty())
            {
                int x = temp.front();
                temp.pop();
                if (h2.find(x) && !inter.find(x))
                    inter.push(x);
            }

            cout << "\n\t\tFIRST min heap (size = " << n1 << "): ";
            if (h1.empty()) cout << " (empty)";
            else cout << "\n\t\t" << h1;

            cout << "\n\n\t\tSECOND min heap (size = " << n2 << "): ";
            if (h2.empty()) cout << " (empty)";
            else cout << "\n\t\t" << h2;

            cout << "\n\n\t\tINTERSECTION (min heap): ";
            if (inter.empty()) cout << " (empty)";
            else cout << "\n\t\t" << inter;

            break;
        }

        default:
            cout << "\n\tERROR: invalid option.\n";
        }

        cout << "\n\n";
        system("pause");
    } while (true);
}
