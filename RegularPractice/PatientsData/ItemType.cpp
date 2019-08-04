#include "ItemType.h"
#include<bits/stdc++.h>
#include<vector>
using namespace std;

ItemType::ItemType(){

}

ItemType::ItemType(int _serialNo, string _name, int _days, vector<int>arr){
    name=_name;
    serialNo=_serialNo;
    days=_days;
    for(int i=0; i<SIZE; i++){
        roomNo[i]=arr[i];
    }

}

int ItemType::getSerialNo(){
	return this->serialNo;
}

int ItemType::getDays(){
	return this->days;
}

string ItemType::getName(){
	return this->name;
}

float ItemType::getTotalCost(){

	float cost=1000;
	float totalCost=cost*days;
}

relation ItemType::compareTo(ItemType item){
    if(this->serialNo < item.getSerialNo())
        return 	LESS;
    else if(this->serialNo > item.getSerialNo())
        return GREATER;
    else return EQUAL;
}

