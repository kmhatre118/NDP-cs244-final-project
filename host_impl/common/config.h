#ifndef NDP_COMMON_CONFIG_COCOS_H_
#define NDP_COMMON_CONFIG_COCOS_H_


#include "config.base.h"


#define NDP_CURRENT_TEST_ENVIRONMENT			ENV_COCOS


/*
When enabled, this means that all packets will go to the same L2-specified next hop, regardless of their
actual L3 destination. The identity of the next hop is hardcoded, and determined based on the local address.
Used for testing (the software switch for example).
*/
#define NDP_HARDCODED_SAME_NEXT_HOP				1


#endif /* NDP_COMMON_CONFIG_COCOS_H_ */
