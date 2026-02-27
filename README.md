Title: Electrical Appliance Load Monitoring System (Week 3)

Overview
This week introduced appliance search and billing calculation based on a tariff. The billing summary shows energy and cost.

What I implemented

Case-insensitive search by appliance name (partial match).

Billing calculation using tariff input:

cost/day = total_kWh/day × tariff

Output formatted using iomanip for clean tables.

Why it matters

Search improves usability when appliances increase.

Billing converts technical energy numbers into real-world cost.

How billing works

User enters tariff (cost per kWh)

Program calculates:

total kWh/day

daily cost

monthly estimate (optional)