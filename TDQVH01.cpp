bool canProvideChange(vector<int>& customerBills, int numberOfBills) {
    
    int cash = 0;
    int fives = 0, tens = 0;
    
    for(int i = 0; i<numberOfBills; i++) {
        if(customerBills[i] == 5) {
            fives++;
        }
        else if(customerBills[i] == 10) {
            tens++;
            if(fives < 1) {
                return false;
            }
            else{
                fives--;
            }
        }
        else if(customerBills[i] == 20) {
            if(fives > 0 && tens > 0) {
               fives--;
               tens--;
            }
            else if(fives > 2) {
                fives -= 3;
            }
            else {
                return false;
            }
        }
        
    }
    return true;
}

