# Connect RaspberryPi Remotely via SSH

<br>

To establish an SSH connection with RaspberryPi in a local network, we have to know the ip address of raspberryPi, to find the ip address we can use a software named **Angry IP Scanner**, after getting IP address we can connect to RaspberryPi for that we can use an another software named **putty**

## Download Angry IP Scanner

<br>

we can download **Angry IP Scanner** from the following link (https://angryip.org/download/#google_vignette)

<br>

![image](https://user-images.githubusercontent.com/109785046/188049732-99270696-8695-45cb-9334-22a613baecc0.png)

<br>

## Open Angry IP Scanner

<br>

Open Angry IP Scanner and find the IP address of RaspberryPi in our local network by clicking **start** on IP scanner

<br>

![image](https://user-images.githubusercontent.com/109785046/188049100-7e9a93c7-4f39-44d8-a9d9-afcb90217619.png)

<br>

## Download putty

<br>

we can download **putty** from the following link (https://www.putty.org/)

<br>

![image](https://user-images.githubusercontent.com/109785046/188053822-1404e4f9-8adb-4f12-a42f-6322566060ae.png)

<br>

## Open putty

<br>

Open putty and enter IP Address got from Angry IP Scanner in Hot name section and click open


<br>

![image](https://user-images.githubusercontent.com/109785046/188056709-18a51324-e63c-4703-aa89-45518dfb461b.png)

<br>

default username : pi<br>
default password : raspberry

<br>

![image](https://user-images.githubusercontent.com/109785046/188081445-a9544db5-1345-4b2e-8913-628de0cfdcab.png)

<br>

## Get IP Address of RaspberryPi

<br>

To get IP Address Open terminal Enter command **"ifconfig"**


<br>

![image](https://user-images.githubusercontent.com/109785046/188083750-2ddd1b14-c823-4ad1-b4e8-63eadfe0547e.png)


<br>

## Enable SSH

<br>

To start SSH connection with RaspberryPi we have to first enable SSH, for that Open Terminal -> **ifconfig** -> Select Interfacing Option

<br>

Sometimes user doesnot have sudo permission, so to add sudo permission, follw the steps. 

<br>

![image](https://user-images.githubusercontent.com/109785046/188088248-7c74ab3f-6aab-41aa-bb6e-a9458141a08b.png)

<br>

![image](https://user-images.githubusercontent.com/109785046/188095890-85468db1-1a6a-45b0-ae9c-f11e89cbc379.png)











