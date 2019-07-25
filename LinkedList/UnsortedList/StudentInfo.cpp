#include "StudentInfo"

template<class ItemType>
StudentInfo<ItemType>::StudentInfo(){
    id=0;
    students_name=0;
    CGPA=0;
}

template<class ItemType>
StudentInfo<ItemType>::MakeEmpty(){
    length=0;
}
