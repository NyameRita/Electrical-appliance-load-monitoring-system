Electrical Appliance Load Monitoring System (C++)
Project Description

This is a console-based C++ application developed to monitor electrical appliance usage and calculate energy consumption and billing costs.

The system allows users to:

Register appliances with power rating and daily usage hours

Store appliance data in a file

Calculate total daily energy usage (kWh/day)

Generate a billing report based on electricity tariff

Save the billing report to a text file

The program uses file handling to persist data between runs.

How the System Works
1️⃣ Appliance Registration

Each appliance is stored in this format:

Name|Power(Watts)|HoursPerDay

Example:

kettle|125|0.3
Laptop|50|6
2️⃣ Energy Calculation Formula

Daily Energy (kWh):

Energy (kWh/day) = (Power × Hours) ÷ 1000

Example:

Kettle → (125 × 0.3) ÷ 1000 = 0.037 kWh/day

Laptop → (50 × 6) ÷ 1000 = 0.300 kWh/day

Total Daily Energy = 0.337 kWh/day

3️⃣ Billing Calculation

If tariff is provided by the user:

Daily Cost = Total kWh/day × Tariff
Monthly Cost = Daily Cost × 30

From demo:

Total Daily Cost = 7.09

Monthly Energy (30 days) = 10.125 kWh

Monthly Cost (30 days) = 212.62

Project Files
main.cpp              → Source code
appliances.txt        → Stored appliance data
billing_summary.txt   → Generated billing report
README.md             → Project documentation
.gitignore            → Excludes executable files
Program Features

✔ Input validation for correct numeric values
✔ File saving and loading
✔ Case-insensitive search
✔ Formatted console output
✔ Automatic billing report generation
✔ Monthly energy and cost estimation

How To Compile and Run
Compile (MinGW / g++)
g++ main.cpp -o main
Run (PowerShell)
.\main
Sample Billing Output
================ BILLING REPORT =================
No.  Name        kWh/day    Cost/day
-------------------------------------
1    kettle      0.037      0.79
2    Laptop      0.300      6.30
-------------------------------------
Total Energy (per day): 0.337 kWh/day
Total Cost (per day):   7.09
Monthly Energy (30d):   10.125 kWh
Monthly Cost (30d):     212.62
=================================================
Conclusion

This project demonstrates:

Structured programming in C++

Use of structs and vectors

File handling (ifstream / ofstream)

Data formatting with iomanip

Practical implementation of energy and billing calculations

The system can be expanded further to include database integration, GUI interface, or real-time monitoring features.