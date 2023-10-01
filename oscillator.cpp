#include <iostream>
using namespace std;

class Oscillator {
    public:
        static void sin() {cout << "sin" << endl;};
        static void saw() {cout << "saw" << endl;};
        static void squ() {cout << "squ" << endl;};
        static void tri() {cout << "tri" << endl;};
        
        static void checkAmp(float *amp) {
            if (*amp <= 0.0) {
                cout << "Error: amp must be positive" << endl;
                exit(1);
            }
        }

        static float *init(float amp = 1.0, float freq = 440.0) {
            checkAmp(&amp);
            float *osc = new float[2];
            osc[0] = amp;
            osc[1] = freq;
            return osc;
        }

        void init(float amp = 1.0, float freq = 440.0) {
            this->amp = amp;
            this->freq = freq;
        }
};
        
int main() {
    osc1 = Oscillator.init();

    Oscillator::sin();
    Oscillator::saw();
    Oscillator::squ();
    Oscillator::tri();
    
    Oscillator::checkAmp(osc1);
};