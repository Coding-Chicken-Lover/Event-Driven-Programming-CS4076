#include "floor.h"
#include <iostream>

Floor::Floor() {
    initMap();
}
Floor::~Floor() {
    std::cout << "Deleting floor " << this->floorNumber << endl;
    for(int i = 0; i < this->rooms.size(); i++) {
        delete this->rooms.at(i);
    }

}


void Floor::setRooms(vector<Room *> &r) {
    this->rooms = r;
}

void Floor::setDetails(int num, QString desc) {
    this->floorNumber = num;
    this->description = desc;
}

vector<Room*> Floor::getRooms() { return this->rooms; }

int Floor::getFloorNum() { return this->floorNumber; }

QString Floor::getDesc() {

    return "Current Floor: " + QString::number(floorNumber) + "\nFloor Name: " + description + "\n";

}

void Floor::initMap() {
    // Initialize map for display
}
