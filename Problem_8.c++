#include <iostream>
using namespace std;

class SmartLight {
private:
    int brightness;
    static int defaultBrightness;

public:
    // SET BRIGHTNESS
    int setBrightness(int b) {
        brightness = b;
        return brightness;
    }

    // GET BRIGHTNESS
    int getBrightness() const {
        return brightness;
    }

    // SET DEFAULT
    static int setDefaultBrightness(int b) {
        defaultBrightness = b;
        return defaultBrightness;
    }

    // GET DEFAULT
    static int getDefaultBrightness() {
        return defaultBrightness;
    }
};

// INIT DEFAULT
int SmartLight::defaultBrightness = 50;

int main() {
    // CREATE OBJECTS
    SmartLight light1, light2;
    
    // APPLY DEFAULT
    int brightness1 = light1.setBrightness(SmartLight::getDefaultBrightness());
    int brightness2 = light2.setBrightness(SmartLight::getDefaultBrightness());

    // DISPLAY VALUES
    cout << "L1: " << brightness1 << endl;
    cout << "L2: " << brightness2 << endl;

    // CHANGE DEFAULT
    int newDefault = SmartLight::setDefaultBrightness(80);

    // NEW OBJECT
    SmartLight light3;
    int brightness3 = light3.setBrightness(SmartLight::getDefaultBrightness());

    // DISPLAY UPDATED
    cout << "DEFAULT: " << newDefault << endl;
    cout << "L3: " << brightness3 << endl;

    return 0;
}
