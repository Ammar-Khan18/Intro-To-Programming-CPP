#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    vector<vector<string>> log;

    cout << "Unit Converter" << endl;
    cout << "Type 'help' for available units." << endl;

    while (true)
    {
        cout << "> ";
        string command;
        cin >> command;

        if (command == "exit")
        {
            break;
        }
        else if (command == "help")
        {
            cout << "Available units:" << endl;
            cout << "Length: km, miles, m, feet, cm, inches" << endl;
            cout << "Weight: kg, pounds, g, ounces" << endl;
            cout << "Temperature: celsius, fahrenheit, kelvin" << endl;
            cout << "Commands: log, help, exit" << endl;
        }
        else if (command == "log")
        {
            if (log.empty())
            {
                cout << "No conversions yet." << endl;
            }
            else
            {
                for (int i = 0; i < log.size(); i++)
                {
                    cout << log[i][0] << " " << log[i][1] << " -> " << log[i][3] << " " << log[i][2] << endl;
                }
            }
        }
        else
        {
            // Parse conversion: value from_unit to_unit
            double value = stod(command);
            string from_unit, to_unit;
            cin >> from_unit >> to_unit;

            double result = 0;
            bool valid = true;

            // Length conversions
            if (from_unit == "km" && to_unit == "miles")
            {
                result = value * 0.621371;
            }
            else if (from_unit == "miles" && to_unit == "km")
            {
                result = value / 0.621371;
            }
            else if (from_unit == "m" && to_unit == "feet")
            {
                result = value * 3.28084;
            }
            else if (from_unit == "feet" && to_unit == "m")
            {
                result = value / 3.28084;
            }
            else if (from_unit == "cm" && to_unit == "inches")
            {
                result = value * 0.393701;
            }
            else if (from_unit == "inches" && to_unit == "cm")
            {
                result = value / 0.393701;
            }
            // Weight conversions
            else if (from_unit == "kg" && to_unit == "pounds")
            {
                result = value * 2.20462;
            }
            else if (from_unit == "pounds" && to_unit == "kg")
            {
                result = value / 2.20462;
            }
            else if (from_unit == "g" && to_unit == "ounces")
            {
                result = value * 0.035274;
            }
            else if (from_unit == "ounces" && to_unit == "g")
            {
                result = value / 0.035274;
            }
            // Temperature conversions
            else if (from_unit == "celsius" && to_unit == "fahrenheit")
            {
                result = (value * 9.0 / 5.0) + 32;
            }
            else if (from_unit == "fahrenheit" && to_unit == "celsius")
            {
                result = (value - 32) * 5.0 / 9.0;
            }
            else if (from_unit == "celsius" && to_unit == "kelvin")
            {
                result = value + 273.15;
            }
            else if (from_unit == "kelvin" && to_unit == "celsius")
            {
                result = value - 273.15;
            }
            else
            {
                cout << "Error: Unknown unit '" << from_unit << "' or '" << to_unit << "'." << endl;
                valid = false;
            }

            if (valid)
            {
                cout << fixed << setprecision(4) << result << " " << to_unit << endl;

                // Store in log
                vector<string> entry;
                entry.push_back(to_string(value));
                entry.push_back(from_unit);
                entry.push_back(to_unit);
                entry.push_back(to_string(result));
                log.push_back(entry);
            }
        }
    }
}