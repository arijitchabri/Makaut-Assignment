read -p "Enter a number : " num

if [ $(($num % 2)) -eq 0 ]
then 
echo "Even"
else
echo "Odd"
fi
