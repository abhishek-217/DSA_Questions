# Write your MySQL query statement below

select player_id , min(event_date) as first_login  from Activity 
Group by player_id;