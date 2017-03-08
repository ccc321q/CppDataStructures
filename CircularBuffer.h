
#ifndef _CIRCULARBUFFER_H_
#define _CIRCULARBUFFER_H_

template <class T>
class CircularBuffer
{
public:
    CircularBuffer()
    {
        // init the buffer head, tail and count to 0
        this->head = 0;
        this->tail = 0;
        this->count = 0;
    };

    void pushBack(T value)
    {
        char t;
        if(this->count < BUFFERLEN)  // there is room for our value
        {
            // add value to tail
            this->buffer[this->tail] = value;

            // increment tail and count
            t = this->tail;
            if(++t >= BUFFERLEN)
                t=0;

            this->count++;
            this->tail = t;

            return; // success
        }
    };

    T popFront()
    {
        T returnVal;
        char t;

        if((this->count != 0))  // something is in there
        {
            this->count--;

            // get the return value
            returnVal = this->buffer[this->head];

            // increment head
            t = this->head;
            if(++t >= BUFFERLEN)
                t=0;

            this->head = t;
        }

        return returnVal;
    };

    bool isEmpty()
    {
        return (count == 0);
    };

    unsigned int itemCount()
    {
        return count;
    };

private:
    static const unsigned int BUFFERLEN = 32;
    unsigned int head;   // head index
    unsigned int tail;   // tail index
    unsigned int count;  // number of items in buffer
    T buffer[BUFFERLEN]; // the actual buffer contents
};

#endif // _CIRCULARBUFFER_H_
