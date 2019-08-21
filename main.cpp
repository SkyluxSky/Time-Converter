//Created by Cameron Cowan
//8/21/2019

#include <iostream>

using namespace std;

int main() {
    
    cout << "-----------Time Converter------------" << endl;
    cout << "\nPlease enter in a length of time in minutes: ";
    
    double amount_of_minutes {0};
    cin >> amount_of_minutes;
    cout << "\nAmount of time (in minutes): "<< amount_of_minutes << endl;
    
    //-------------------Converter's-------------------------
    
    //seconds
    const int seconds_const {60};
    double result_seconds {0};
    result_seconds = amount_of_minutes * seconds_const;
    cout << "\nseconds: "<< result_seconds << " sec(s)" << endl;
    
    //hour
    const int hours_const {60};
    double result_hours {0};
    result_hours = amount_of_minutes / hours_const;
    cout << "\nhours: "<< result_hours << " hr(s)" << endl;
    
    //days
    const int days_const {1440};
    long double result_days {0};
    result_days = amount_of_minutes / days_const;
    cout << "\ndays: "<< result_days << " day(s)" << endl;
    
    //weeks
    const int weeks_const {10080};
    long double result_weeks {0};
    result_weeks = amount_of_minutes / weeks_const;
    cout << "\nweeks: "<< result_weeks << " week(s)" << endl;
    
    //months
    const double months_const {43800.048};
    long double result_months {0};
    result_months = amount_of_minutes / months_const;
    cout << "\nmonths: "<< result_months << " month(s)" << endl;
    
    //years
    const int years_const {525600};
    long double result_years {0};
    result_years = amount_of_minutes / years_const;
    cout << "\nyears: "<< result_years << " year(s)" << endl;
    
    cout << endl;
    return 0;
}