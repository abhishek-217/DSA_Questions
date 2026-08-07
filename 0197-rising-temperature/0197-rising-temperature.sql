# Write your MySQL query statement below
select B.id
from Weather A

INNER join Weather B
-- ON A.recordDate = B.recordDate-1 or Datediff(A.recordDate , B.recordDate) = 30
ON A.recordDate = DATE_SUB(B.recordDate, INTERVAL 1 DAY)
where A.temperature < B.temperature
