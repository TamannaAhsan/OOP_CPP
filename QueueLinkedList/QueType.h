#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED

class FullQueue{};
class EmptyQueue{};
template<class ItemType>
class QueType{
    struct NodeType{
        ItemType info;
        NodeType* next;
    };
public:
    QueType();
    ~QueType();
    void MakeEmpty();
    bool IsFull();
    bool IsEmpty();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);

private:
   NodeType *front, *rear;
};


#endif // QUETYPE_H_INCLUDED
