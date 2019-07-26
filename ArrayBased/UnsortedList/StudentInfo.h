#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

template<class ItemType>
class StudentInfo{

private:
    int length;
    int id;
    string students_name;
    float CGPA;

public:
    StudentInfo();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetriveItem(ItemType&, bool&);
    void ResetList();
    void GetNextItem(ItemType&);

};



#endif // STUDENTINFO_H_INCLUDED
