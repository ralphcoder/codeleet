class ParkingSystem {

public:int lot[3]={};
    ParkingSystem(int big, int medium, int small) {
    lot[0]=big;
    lot[1]=medium;
    lot[2]=small;
    }
    
    bool addCar(int carType) {
        if(lot[carType-1]>0)
        {  lot[carType-1]--;
        return true;}
        return false;
    }
};