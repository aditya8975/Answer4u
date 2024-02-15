#include <iostream>

using namespace std;

class WeatherReport {
private:
    int day_of_month;
    double total_high_temp;
    double total_low_temp;
    double total_amount_rain;
    double total_amount_snow;
    int num_days;

public:
    WeatherReport() 
    {
day_of_month=1; 
total_high_temp=0;
 total_low_temp=0;
  total_amount_rain=0;
   total_amount_snow=0;
    num_days=0;
    } 

    
    void input_data() {
        double high_temp, low_temp, amount_rain, amount_snow;
        cout << "Enter day of month: ";
        cin >> day_of_month;
        cout << "Enter high temperature: ";
        
        cin >> high_temp;
        total_high_temp += high_temp;
        cout << "Enter low temperature: ";
       
        cin >> low_temp;
        total_low_temp += low_temp;
        cout << "Enter amount of rain: ";
        
        cin >> amount_rain;
        total_amount_rain += amount_rain;
        cout << "Enter amount of snow: ";
        
        cin >> amount_snow;
        total_amount_snow += amount_snow;

        num_days++;
    }

 
    void display_report() {
        cout << "\nMonthly Report\n";
        cout << "Average High Temp: " << (total_high_temp / num_days) << endl;
        cout << "Average Low Temp: " << (total_low_temp / num_days) << endl;
        cout << "Average Amount of Rain: " << (total_amount_rain / num_days) << endl;
        cout << "Average Amount of Snow: " << (total_amount_snow / num_days) << endl;
    }
};

int main() {
    WeatherReport monthly_report;
    int choice;
    do {
        cout << "\n1. Enter weather data for a day\n"
             << "2. Generate monthly report\n"
             << "3. Exit\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            monthly_report.input_data();
            break;
        }
        case 2: {
           
            monthly_report.display_report();
            break;
        }
        case 3:
            cout << "Exiting program.\n";
            break;
       
        }
    } while (choice != 3);

    return 0;
}
