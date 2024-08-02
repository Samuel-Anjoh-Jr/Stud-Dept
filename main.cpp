#include <iostream>

using namespace std;

// Define the SWE class
class SWE {
public:
    void display() {
        cout << "I am a software student" << endl;
    }
};

// Define the NWS class
class NWS {
public:
    void display() {
        cout << "I am a network and security student" << endl;
    }
};

// Define the CSN class
class CSN {
public:
    void display() {
        cout << "I am a computer network and security student" << endl;
    }
};

// Define the ICT class that inherits from SWE, NWS, and CSN
class ICT : public SWE, public NWS, public CSN {
public:
    void displayICT() {
        cout << "I belong to all categories: SWE, NWS, and CSN" << endl;
    }
};

// Main method
int main() {
    // i. Function of SWE by the object of SWE
    SWE swe_obj;
    swe_obj.display();  // Output: "I am a software student"

    // ii. Function of NWS by the object of NWS
    NWS nws_obj;
    nws_obj.display();  // Output: "I am a network and security student"

    // iii. Function of CSN by the object of CSN
    CSN csn_obj;
    csn_obj.display();  // Output: "I am a computer network and security student"

    // iv. Function of ICT by the object of ICT
    ICT ict_obj;
    ict_obj.displayICT();  // Output: "I belong to all categories: SWE, NWS, and CSN"

    // v. Call the function of each of its parent by the object of ICT
    ict_obj.SWE::display();  // Output: "I am a software student"
    ict_obj.NWS::display();  // Output: "I am a network and security student"
    ict_obj.CSN::display();  // Output: "I am a computer network and security student"

    return 0;
}

// Inheritance Type: This is an example of multiple inheritance, where the class ICT
// inherits from multiple classes (SWE, NWS, CSN).

// Ambiguity Resolution: The ambiguity in calling methods from parent classes in multiple
// inheritance is resolved by explicitly specifying the parent class when calling the method,
// as seen in step v above.
