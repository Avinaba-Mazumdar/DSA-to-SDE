SELECT name FROM SalesPerson WHERE sales_id NOT IN (
     SELECT sales_id FROM orders WHERE com_id IN (
          SELECT com_id FROM Company WHERE name='Red'
     )
);