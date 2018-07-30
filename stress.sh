#!/bin/bash
counter=0
while [ $counter -lt 60 ]; do
  for i in `seq 1 500`;
  do
   `/usr/bin/curl 192.168.67.63:3000/course/pickup`
  done   
  sleep 1 
  let counter=counter+1
done  