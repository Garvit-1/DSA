# Write your MySQL query statement below
select p.product_id,IFNULL(ROUND(SUM(units*price)/SUM(units),2),0) as average_price 
from Prices as p LEFT JOIN UnitsSold as u ON p.product_id=u.product_id AND purchase_date BETWEEN start_date AND end_date GROUP BY product_id; 



