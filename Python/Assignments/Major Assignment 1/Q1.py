# Write a Python function basic_salary that accepts two parameters: hourly rate and hours worked per week. The function should calculate the basic salary per month (assuming a month has 4 weeks). If the hours worked per week exceed 40, create another function overtime salary, where every extra hour worked is paid at 1.5 times the normal hourly rate. Finally, create another function total salary that returns the sum of the basic salary and overtime.

def basic_salary(hrate, weekrate):
    tots = hrate * weekrate * 4
    return tots

def overtime_salary(hrate, weekrate):
    if weekrate > 40:
        hours = weekrate - 40
        pay = hours * hrate * 1.5 * 4
        return pay
    else:
        return 0

def total_salary(hrate, weekrate):
    basic = basic_salary(hrate, weekrate)
    overtime = overtime_salary(hrate, weekrate)
    total = basic + overtime
    return total

hrate = float(input("Enter your hourly rate: "))
weekrate = float(input("Enter hours worked per week: "))

print("Basic Salary per month:", basic_salary(hrate, weekrate))
print("Overtime Salary per month:", overtime_salary(hrate, weekrate))
print("Total Salary per month:", total_salary(hrate, weekrate))
