#include <iostream>
#include <string>
using namespace std;

class RobotPemadam
{
    public:
        void inputSensor(int j)
        {
            jarak = j;
        }

        void prosesLogika()
        {
            if (jarak>20) {
                status = "Maju Mencari Api";
            } else if (jarak>5 && jarak<=20) {
                status = "UDAH DEKET NIH BRAY";
            } else {
                status = "Posisi Tepat! gas semprot kali ya!";
            }
        }

        void cetakStatus()
        {
            cout << "[Sensor: " <<jarak << " cm] -> Action: [" << status << "]\n";
        }

    private:
        int jarak;
        string status;
};

int main()
{
    RobotPemadam robot;
    int input;

    while (true)
    {
        cout << "ENTER YOUR INPUT (or 67 to stop).\n";
        cout << ">>> "; cin >> input;
        if (input==67) {
            // cout << "\n";
            cout << "Program stoped.\n";
            break;
        }
        robot.inputSensor(input);
        robot.prosesLogika();
        robot.cetakStatus();
    }

    return 0;
}