read -p "Enter 1st number " num1
read -p "Enter 2nd number " num2
read -p "Enter 3rd number " num3

if [ $num2 -gt $num1 ]
then
if [ $num2 -gt $num3 ]
then 
echo "Num 2 is greater"
else
echo "Num 3 is greater"
fi
else
if [ $num1 -gt $num3 ]
then
echo "Num 1 is greater"
else
echo "Num 3 is greater"
fi
fi
