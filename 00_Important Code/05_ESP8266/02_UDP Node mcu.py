import socket  # import socket

UDP_IP_node = "192.168.2.173"  # Set Receivers IP
UDP_IP = "192.168.2.175"  # Set our IP address
UDP_PORT = 4210  # Set PORT number
MESSAGE = b"M_CALL"

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)  # UDP
sock.bind((UDP_IP, UDP_PORT))  # Initialize UDP socket

sock.sendto(MESSAGE, (UDP_IP_node, UDP_PORT))
while True:  # Start infinite loop

    data, addr = sock.recvfrom(1024)  # buffer size is 1024 bytes
    data = data.decode("utf-8")  # Decode received data
    print("received message: %s" % data)  # Print Message
    if data == "stop":  # Check if stop command received
        print(" Communication terminated")  # Print session termination message
        sock.close()  # kill UDP communication
        break
