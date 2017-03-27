#!/bin/bash
sudo docker stop $(docker ps -a)
sudo docker rm -f $(docker ps -a -f status=exited -f status=created -q)
sudo docker rmi -f $(docker images -a)