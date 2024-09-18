class ParkingSystem {
private:
    vector<int>Parking;
public:
    ParkingSystem(int big, int medium, int small) : Parking{big, medium, small}{
        
    }
    
    bool addCar(int carType) {
        if (carType == 1)
        {
            if (Parking[0] > 0)
            {
                Parking[0]--;
                return true;
            }
            else
                return false;
        }
        if (carType == 2)
        {
            if (Parking[1] > 0)
            {
                Parking[1]--;
                return true;
            }
            else
                return false;
        }
        else if (carType == 3)
        {
            if (Parking[2] > 0)
            {
                Parking[2]--;
                return true;
            }
            else
                return false;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */