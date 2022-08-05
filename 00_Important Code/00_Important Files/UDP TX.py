
import socket
UDP_IP="192.168.2.180"
UDP_PORT=2020

UDP_IP1="192.168.2.174"

sock=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
sock.bind((UDP_IP,UDP_PORT))


#MESSAGE="Hai"

while(1):
        MESSAGE=input("Enterr your msg to send==> ")
        MESSAGE = MESSAGE.encode('utf-8')
        sock.sendto(MESSAGE,(UDP_IP1,UDP_PORT))
        print ("Message sucessfully sent... :",MESSAGE)
