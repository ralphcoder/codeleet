select employee_id, if(employee_id%2=1 and name not like 'M%' , salary ,0)bonus
from Employees
order by 1