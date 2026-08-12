select we.id
from Weather w

Left join Weather we
-- ON w.recordDate = we.recordDate-1 
ON DATEDIFF(we.recordDate, w.recordDate) = 1


where w.temperature < we.temperature;