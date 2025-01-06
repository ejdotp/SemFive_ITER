# Create a function tax_amount that shows how much taxes are deducted from the basic salary. Taxes are applied as follows:
# • If the salary is less than Rs. 60,000/-, deduct 10% as tax.
# • If the salary is between Rs. 60,000/- and Rs. 85,000/-, deduct 15% as tax.
# • If the salary is more than Rs. 85,000/-, deduct 20% as tax.

salary = float(input("Enter your salary: "))

def tax_function(sal):
    if(sal < 60000):
        return ((sal*10)/100)
    elif (sal >= 60000) or (sal <= 85000):
        return ((sal*15)/100)
    else:
        return ((sal*20)/100)

tax = tax_function(salary)
print("Tax amount is: ", tax)

