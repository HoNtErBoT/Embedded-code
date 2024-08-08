# "VNC server on Raspberry Pi" what does this mean exactly?

VNC (virtual network computing) is a client-server software which can be used to display and control the screen content of the target system (server) on another system (client). For this purpose, keyboard entries, mouse movements, and clicks on the client side are transferred directly to the remote computer. So, if you install and activate VNC on a Raspberry Pi, you can easily install, configure, and manage the minicomputer from another PC. VNC is based on the cross-platform network protocol remote framebuffer protocol (RFB), which transmits the content as bitmaps

To enable VNC in the raspberrypi please follow the below steps

first we have to open terminal  and enable VNC from terminal

![image](https://github.com/user-attachments/assets/edb8026a-b290-407b-8105-645c952f6f0f)

![image](https://github.com/user-attachments/assets/30eb83aa-c024-48b6-83fa-805938f1ca1f)

![image](https://github.com/user-attachments/assets/9f81fdac-1ee0-452f-87bc-91e68c4cc63e)

![image](https://github.com/user-attachments/assets/e18aa29b-2aa3-41a0-b49c-0a5b367ce87b)

![image](https://github.com/user-attachments/assets/d913c6f1-6ad4-49ff-96d2-0683237ff1c4)


```
sudo apt-get install realvnc-vnc-server
sudp apt-get install realvnc-vnc-viewer

vncserver-virtual

```

![image](https://github.com/user-attachments/assets/229d4122-d306-4c05-9ef3-ae83281247ba)


![image](https://github.com/user-attachments/assets/9274785a-cdc5-42b4-8a89-8537850de975)

![image](https://github.com/user-attachments/assets/67af5dc7-4a46-4342-bc12-bc552eeb4cb3)

![image](https://github.com/user-attachments/assets/d3e691f5-33dc-4e71-8116-29754ffc23ef)









