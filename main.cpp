#include<iostream>
#include"input.h"
#include"MaxHeap.h"
#include"MinHeap.h"
#include<vector>
#include<algorithm>
using namespace std;

void HeapMenu();
void maxHeap();
void minHeap();
void UnionAndIntersect();
void HeapSTL();

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
        case 3:HeapSTL(); break;
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

void HeapSTL()
{
    vector<int> v;   // dynamic array that we will treat as a heap sometimes

    do {
        system("cls");
        cout << "\n\t\t3> Heap in C++ STL";
        cout << "\n\t\t" << string(70, char(205));
        cout << "\n\t\t\tA> create a dynamic array";
        cout << "\n\t\t\tB> push_back() an element";
        cout << "\n\t\t\tC> make_heap()";
        cout << "\n\t\t\tD> front()";
        cout << "\n\t\t\tE> push_heap()";
        cout << "\n\t\t\tF> pop_heap()";
        cout << "\n\t\t\tG> sort_heap()";
        cout << "\n\t\t\tH> is_heap()";
        cout << "\n\t\t\tI> is_heap_until()";
        cout << "\n\t\t\tJ> display";
        cout << "\n\t\t" << string(70, char(196));
        cout << "\n\t\t\t0> return";
        cout << "\n\t\t" << string(70, char(205)) << '\n';

        char option = toupper(inputChar("\n\t\tOption: ", static_cast<string>("ABCDEFGHIJ0")));

        switch (option)
        {
        case '0':
            return;

            // A) create / reset dynamic array
        case 'A':
        {
            v.clear();
            int n = inputInteger("\n\t\tEnter number of elements to create: ", 0, 1000);
            /*for (int i = 0; i < n; ++i)
            {
                int value = inputInteger("\t\tEnter value #" + to_string(i + 1) + ": ");
                v.push_back(value);
            }*/
            break;
        }

        // B) push_back one element (no heap maintenance yet)
        case 'B':
        {
            int value = inputInteger("\n\t\tEnter a value to push_back: ");

            // check for duplicate in the current vector
            while (find(v.begin(), v.end(), value) != v.end())
            {
                cout << "\n\t\tERROR: the element, " << value
                    << ", already exists in the vector. Please re-specify.\n";
                value = inputInteger("\n\t\tEnter a value to push_back: ");
            }

            v.push_back(value);
      
            break;
        }

        // C) make_heap over the whole vector
        case 'C':
        {
            if (v.empty())
            {
                cout << "\n\t\tThe dynamic array is empty. Nothing to make a heap from.";
            }
            else
            {
                make_heap(v.begin(), v.end());    // max-heap by default
                cout << "\n\t\tmake_heap() has been applied. The vector now represents a max heap.";
            }
            break;
        }

        // D) front() of the heap (root) — works on any vector, but meaningful if it’s a heap
        case 'D':
        {
            if (v.empty())
                cout << "\n\t\tThe dynamic array is empty.";
            else
                cout << "\n\t\tfront() of the vector: " << v.front();
            break;
        }

        // E) push_heap(): assume the last element was added with push_back()
        case 'E':
        {
            if (v.empty())
            {
                cout << "\n\t\tThe dynamic array is empty. Use push_back() first.";
                break;
            }

            if (v.size() == 1)
            {
                cout << "\n\t\tOnly one element: it is trivially a heap.";
                break;
            }

            // Precondition: [first, last-1) must already be a heap
            if (!is_heap(v.begin(), v.end() - 1))
            {
                cout << "\n\t\tERROR: [begin, end-1) is not a heap.\n"
                    << "\t\tUse make_heap() first, then push_back() and push_heap().";
            }
            else
            {
                push_heap(v.begin(), v.end());
                cout << "\n\t\tpush_heap() has been applied to the last element.";
            }
            break;
        }

        // F) pop_heap(): move largest element to end, then pop_back()
        case 'F':
        {
            if (v.empty())
            {
                cout << "\n\t\tThe heap/vector is empty.";
            }
            else
            {
                if (!is_heap(v.begin(), v.end()))
                {
                    cout << "\n\t\tERROR: The vector is not a heap. Use make_heap() first.";
                }
                else
                {
                    pop_heap(v.begin(), v.end());      // largest to v.back()
                    int removed = v.back();
                    v.pop_back();
                    cout << "\n\t\tpop_heap() removed: " << removed;
                }
            }
            break;
        }

        // G) sort_heap(): sort elements (after this, it is no longer a heap)
        case 'G':
        {
            if (v.empty())
            {
                cout << "\n\t\tThe vector is empty.";
            }
            else
            {
                if (!is_heap(v.begin(), v.end()))
                {
                    cout << "\n\t\tERROR: The vector is not a heap. Use make_heap() first.";
                }
                else
                {
                    sort_heap(v.begin(), v.end());   // sorts in descending order for max-heap
                    cout << "\n\t\tsort_heap() has been applied. The vector is now sorted (no longer a heap).";
                }
            }
            break;
        }

        // H) is_heap(): check if current vector satisfies heap property
        case 'H':
        {
            if (v.empty())
            {
                cout << "\n\t\tThe vector is empty. An empty range is considered a heap.";
            }

            if (is_heap(v.begin(), v.end()))
                cout << "\n\t\tYES: The current vector is a heap (max-heap).";
            else
                cout << "\n\t\tNO: The current vector is NOT a heap.";
            break;
        }

        // I) is_heap_until(): find first position where heap property fails
        case 'I':
        {
            if (v.empty())
            {
                cout << "\n\t\tThe vector is empty. Entire (empty) range is a heap.";
                break;
            }

            auto it = is_heap_until(v.begin(), v.end());
            if (it == v.end())
            {
                cout << "\n\t\tThe entire vector is a heap.";
            }
            else
            {
                int index = static_cast<int>(distance(v.begin(), it));
                cout << "\n\t\tThe range is a heap up to index " << (index - 1)
                    << ". First violation at index " << index
                    << " with value " << *it << '.';
            }
            break;
        }

        // J) display: show raw vector contents
        case 'J':
        {
            cout << "\n\t\tCurrent vector contents: ";
            if (v.empty())
            {
                cout << "(empty)";
            }
            else
            {
                cout << '\n' << "\t\t";
                for (size_t i = 0; i < v.size(); ++i)
                    cout << v[i] << ' ';
            }
            break;
        }

        default:
            cout << "\n\t\tERROR: invalid option.\n";
        }

        cout << "\n\n";
        system("pause");
    } while (true);
}
