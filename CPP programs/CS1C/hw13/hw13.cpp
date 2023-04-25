//hw13
//Exception

#include<iostream>
#include<assert.h>
#include<exception>
using namespace std;

/*************************************************************************
 * AUTHOR     : Ali Eshghi
 * HW13       : Templates Queue
 * CLASS      : CS 1C
 * SECTION    : July 16th, 2020
*************************************************************************/

//Exception class to show the queue is full
class queueFullException: exception
{
public:
    virtual const char* what() const throw()
    {
        return "*** <Queue is Full, no entry allowed> ***";
    }
};

//Exception class to show queue is empty
class queueEmptyException: exception
{
public:
    virtual const char* what() const throw()
    {
        return "*** <Queue is empty> ***";
    }
};


//Template class for Queue
template <class X>
class Queue
{
public:
    //constructor
    Queue(int n)
    {
        a = new X[n];
        maxSize = n;
        front = 0;
        back = -1;
        size = 0;

    }

    //copy constructor
    Queue(const Queue& obj);

    //function to insert element in queue
    void enqueue(X value)
    {
        if(isFull())
        {
            throw queueFullException();
        }

        back = (back+1) % maxSize;
        a[back] = value;
        cout << "<The element " << value << " has been inserted successfully>" << endl;
        size++;
    }

    //function to remove element from queue
    X dequeue()
    {
        X temp;

        if(isEmpty())
        {
            throw queueEmptyException();
        }

        temp = a[front];
        front = (front+1) % maxSize;
        size--;
        cout << "<Element " << temp << " was removed from the list>" << endl;
        return temp;
    }

    //function to retrieve the first element from the queue
    X getFront()
    {
        if(isEmpty())
        {
            throw queueEmptyException();
        }

        return a[front];
    }

    //function to check is the queue is full
    bool isFull()
    {
        if(size == maxSize)
        {
            return true;
        }

        else
        {
            return false;
        }
    }

    //function to check is the queue is empty
    bool isEmpty()
    {
        if(size == 0)
        {
            return true;
        }

        else
        {
            return false;
        }
        
    }

    //function to get the size of the queue
    int getSize()
    {
        return size;
    }

    //function to print the Queue
    void printQueue()
    {
        
        if(isEmpty())
        {
            cout << "<The Queue is empty... nothing to print" << endl;
            return;
        }

        else
        {
            cout << "------------------------------------" << endl;
            cout << "printing Queue: ";

            for(int i = 0; i < size; i++)
            {
                cout << a[i] << " ";
            }

            cout << "\n------------------------------------" << endl;
        }
        



    }

    //Assignment operator overload
    const Queue& operator=(const Queue& obj)
    {
        Queue<int> dummy(size);

        if(this != &obj)
        {
            dummy(size) = obj;
        }
        
        return *this;
    }


private:
    X *a;
    int front;
    int back;
    int size;
    int maxSize;
};

//*********************** HW12 main ************************
int main()
{
    // console header
	cout << endl;
	cout << "************************************** " << endl;
	cout << "*           Running HW13             * " << endl;
	cout << "*      Programmed by Ali Eshghi      * " << endl;
	cout << "*      CS1C July 16th, 2020          * " << endl;
	cout << "************************************** " << endl;
	cout << endl;

    //creating a string queue
    cout << "Testing Queue implementation on string data type: " << endl;
    Queue<string> q(5);

    //calling the copy constructor
    //Queue<string> p = q;

    //Performing 6 additions
    try
    {
        q.enqueue("a");
        q.enqueue("b");
        q.enqueue("c");
        q.enqueue("d");
        q.enqueue("e");
        q.enqueue("f");
    }
    catch(queueFullException e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    
    //printing the Queue
    q.printQueue();

    //performing 4 deletation
    try
    {
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();
    }
    catch(queueEmptyException e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    
    //printing the Queue
    q.printQueue();

    //Retrieving the first element
    try
    {
        q.getFront();
    }
    catch(queueEmptyException e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    

    return 0;
}