extern char gGetHostName[MAX_CONFIG_STRING];

#ifdef __ANDROID__
const char *domain_resolution(const char *host_name);
#else
void domain_resolution(void);
#endif
void save_domain(void);
