for i in {1..20};
do
  b=$((10*$i))
  #echo $b
  shuf -i 1-1000 -n $b > output.txt
  cat output.txt > test$i.txt
  shuf -n 1 output.txt >> test$i.txt
done
