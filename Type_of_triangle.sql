select case
when A+B<=C OR B+C<=A OR C+A<=B then 'Not A Triangle'
when A=B and B=C then 'Equilateral'
when A=B or B=C or C=A then 'Isosceles'
else 'Scalene'
end
from Triangles