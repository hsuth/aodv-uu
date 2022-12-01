for file in $(find /home/pi/aodv-uu -type f); do
   tr -d '\r' <$file >temp.$$ && mv temp.$$ $file
done
