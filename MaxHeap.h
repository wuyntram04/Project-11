#ifndef MAXHEAP_H
#define MAXHEAP_H
#include <iostream>
#include <vector>
using namespace std;

template<class T>
class MaxHeap
{
private:
	vector<T> A;
    
    int parent(int i)
    {
        return (i - 1) / 2;
    }

    // return left child of A[i]    
    int left(int i)
    {
        return (2 * i + 1);
    }

    // return right child of A[i]    
    int right(int i)
    {
        return (2 * i + 2);
    }

    void heapify_down(int i)
    {
        // get left and right child of node at index i
        int l = left(i);
        int r = right(i);

        int largest = i;

        // compare A[i] with its left and right child and find smallest value
        if (l < size() && A[l] > A[i])
            largest = l;

        if (r < size() && A[r] > A[largest])
            largest = r;

        // swap with child having lesser value and call heapify-down on the child
        if (largest != i) {
            swap(A[i], A[largest]);
            heapify_down(largest);
        }
    }

    // Recursive Heapify-up algorithm
    void heapify_up(int i)
    {
        // check if node at index i and its parent violates  the heap property
        if (i < 0 || i > A.size())
            return;

        if (i && A[parent(i)] < A[i])
        {
            // swap the two if heap property is violated
            swap(A[i], A[parent(i)]);

            // call Heapify-up on the parent
            heapify_up(parent(i));
        }
    }

public:
    bool find(T key) const
    {
        for (int i = 0; i < A.size(); i++)
            if (A[i] == key)
                return true;
        return false;
    }

    unsigned int size()
    {
        return A.size();
    }

    // function to check if heap is empty or not
    bool empty()
    {
        return A.size() == 0;
    }

    // insert key into the heap
    void push(T key)
    {
        // insert the new element to the end of the vector
        A.push_back(key);

        // get element index and call heapify-up procedure
        heapify_up(size() - 1);
    }

    T front()
    {
            if (empty())
                return NULL;
            
            return A[0];
    }

    void pop()
    {
        if (empty())
            return;

        A[0] = A.back();
        A.pop_back();

        // call heapify-down on root node
        heapify_down(0);
    }

    friend ostream& operator <<<>(ostream& out, const MaxHeap<T>& obj);
};

template<class T>
ostream& operator <<(ostream& out, const MaxHeap<T>& obj)
{
    for (unsigned int i = 0; i < obj.A.size(); i++)
        out << obj.A[i] << " ";
    return out;
}

#endif //


