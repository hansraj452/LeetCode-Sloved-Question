SELECT firstName,lastName,city,state
FROM Person
Left JOIN Address
USING(PersonId)