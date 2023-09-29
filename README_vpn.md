# How to play `sm64ex-coop` with ZeroTier VPN on Android

This guide is for anyone who can't port forward, like cell data users. A "host" needs to create an account and invite "guests", players who join. This example shows what each person needs to do at every step. The steps for the "host" are in the left column, while what the "guest" should do at the same time is in the right column. Once everyone is connected to ZeroTier, technically anyone can use the "Host" button in the actual `sm64ex-coop` app, but for simplicity the "host" will do it in this example. **Warning: the ZeroTier One app for Android is proprietary**, but for updates on that status, self-hosting, alternative builds and partial source code, follow [this project](https://github.com/kaaass/ZerotierFix).

This assumes that all players have already followed the [build guide](README_android.md) to compile and install the `sm64ex-coop` app.

![vpnguide](https://user-images.githubusercontent.com/31490854/208311970-012df922-4295-47a6-b9d5-291828ec7bf8.jpg)

> If you have problems connecting, make sure that the bottom of the ZeroTier One app says "ONLINE" not "OFFLINE":

![image](https://user-images.githubusercontent.com/31490854/216770304-d499a78f-fdc5-4784-8fd0-c45680518f98.png)

> and also that the key icon stays in the top right corner of the screen on both the guest and the host. If it keeps disappearing, keep going back to the ZeroTier One app and toggling the network back on, then trying to connect again:

![image](https://user-images.githubusercontent.com/31490854/216770251-342eec31-4f90-4e1e-9c92-9549299b4782.png)


> When connecting over VPN, if clients fail to connect or crash on connect and the host has mods enabled, the guests should download the same mods and preinstall them to `/storage/emulated/0/com.owokitty.sm64excoop/user/mods` (or `/storage/emulated/0/Android/data/com.owokitty.sm64excoop/files/user/mods` if they didn't accept the storage permissions popup) because the VPN has high packet loss and can corrupt the mod files.

> If someone is cross-playing from Windows and wants to host the `sm64ex-coop` game server, tell them to click this button in ZeroTier One for Windows and send that number to the guests as the IP for the "Join" box.

![image](https://user-images.githubusercontent.com/31490854/208313169-db886198-befd-4409-9867-68dbd3daa93c.png)

> To host the game server, people with Windows probably also have to disable Windows Firewall in this menu, because Windows Firewall is uncooperative and frequently blocks the game server

![image](https://user-images.githubusercontent.com/31490854/212804094-8a9fc5b9-6ead-48a3-9850-aa3ccc34640e.png)


> Guide made by me, flipflop bell#4376 and Redstone#2442
