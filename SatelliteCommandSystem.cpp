#include <iostream>
#include <string>
using namespace std;

class Satellite {
	
private:
    string name;
    string orientation;
    string status;
    int Data;
	
	
public:
    // Constructor to initialize the satellite
    Satellite(const string& name="", string orientation="North", string status="Inactive",int Data=0)
      {
      this->name=name;
      
      this->orientation=orientation;
      this->status=status;
      this->Data=Data;
    }

    // Member function to set the status of the satellite
    void activatePanels() {
        status = "Active";
    }
    
    void deactivatePanels() {
        status = "Inactive";
    }
    
	void rotate(string orientation){
		this->orientation=orientation;
	}
	
    // Member function to increase collectData_ by 10 units
    void collectData() {
    	if(status=="Active")
        Data+= 10;
    }

    // Member function to print satellite information
    void printInfo()  {
    
         cout << "Satellite Name: " << name <<  endl;
          cout << "Orientation: " << orientation <<  endl; 
         cout << "Status: " << status <<  endl;
         cout << "Collected Data: " << Data<< " units" <<  endl;
    }

};

int main() {
	

    // Create a Satellite object and initialize it
    Satellite mySatellite("Pragyan");

    // Set the status of the satellite
    mySatellite.activatePanels();

    // Increase the collectData_ by 10 units
    mySatellite.collectData();

	mySatellite.rotate("South");
	mySatellite.deactivatePanels();
	mySatellite.collectData();
	
    // Print satellite information
    mySatellite.printInfo();

    return 0;
}

