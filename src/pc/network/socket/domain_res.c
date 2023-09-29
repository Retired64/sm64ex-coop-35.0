#include <stdio.h>
#include "socket.h"
#include "pc/configfile.h"
#include "pc/debuglog.h"
#include "pc/djui/djui.h"
#ifdef WINSOCK
#include <winsock2.h>
#include <ws2tcpip.h>
#else
#include <netdb.h>
#endif

char gGetHostName[MAX_CONFIG_STRING] = "";

#ifdef __ANDROID__
const char *domain_resolution(char *host_name) {
#else
void domain_resolution(void) {
#endif
    struct in_addr addr;
#ifndef __ANDROID__
    char *host_name = configJoinIp;
#endif
    struct hostent *remoteHost;
    char *domainname = "";

    int i = 0;
    remoteHost = gethostbyname(host_name);
    if (remoteHost == NULL) {
#ifdef __ANDROID__
        return NULL;
#else
        return;
#endif
    }

    if (remoteHost->h_addrtype == AF_INET) {
        while (remoteHost->h_addr_list[i] != 0) {
            addr.s_addr = *(u_long *) remoteHost->h_addr_list[i++];
#ifdef __ANDROID__
            return inet_ntoa(addr);
#else
            domainname = inet_ntoa(addr);
            snprintf(configJoinIp, MAX_CONFIG_STRING, "%s", domainname);
#endif
        }
    }
#ifdef __ANDROID__
    return NULL;
#endif
}
