#ifndef ITEMTYPE_H_INCLUDED
#define ITEMTYPE_H_INCLUDED

enum relation {LESS , GREATER , EQUAL};
#include<bits/stdc++.h>
using namespace std;

const int SIZE =100;
class ItemType {

private :
	int serialNo;
	string name;
	int days;

public :
    ItemType();
    ItemType(int _serialNo, string _name, int _days);
    string getName();
    int getSerialNo();
    int getDays();
    float getTotalCost();
	relation compareTo(ItemType item);
};

#endif // ITEMTYPE_H_INCLUDED
