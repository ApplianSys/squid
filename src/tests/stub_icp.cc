#include "config.h"
#include "comm/Connection.h"
#include "ICP.h"
#include "icp_opcode.h"

#define STUB { fatal("icp_*.cc required."); }
#define STUB_RETVAL(x) { fatal("icp_*.cc required."); return (x); }
//#define STUB_RETREF(x) { fatal("icp_*.cc required."); static x v; return v; }

#ifdef __cplusplus
_icp_common_t::_icp_common_t() STUB
_icp_common_t::_icp_common_t(char *buf, unsigned int len) STUB
void _icp_common_t::handleReply(char *buf, Ip::Address &from) STUB
_icp_common_t *_icp_common_t::createMessage(icp_opcode opcode, int flags, const char *url, int reqnum, int pad) STUB_RETVAL(NULL)
icp_opcode _icp_common_t::getOpCode() const STUB_RETVAL(ICP_INVALID)
ICPState::ICPState(icp_common_t &aHeader, HttpRequest *aRequest) STUB
ICPState::~ICPState() STUB
#endif

Comm::ConnectionPointer icpIncomingConn;
Comm::ConnectionPointer icpOutgoingConn;
Ip::Address theIcpPublicHostID;

HttpRequest* icpGetRequest(char *url, int reqnum, int fd, Ip::Address &from) STUB_RETVAL(NULL)
int icpAccessAllowed(Ip::Address &from, HttpRequest * icp_request) STUB_RETVAL(0)
void icpCreateAndSend(icp_opcode, int flags, char const *url, int reqnum, int pad, int fd, const Ip::Address &from) STUB
icp_opcode icpGetCommonOpcode() STUB_RETVAL(ICP_INVALID)
int icpUdpSend(int, const Ip::Address &, icp_common_t *, log_type, int) STUB_RETVAL(0)
log_type icpLogFromICPCode(icp_opcode opcode) STUB_RETVAL(LOG_TAG_NONE)
void icpDenyAccess(Ip::Address &from, char *url, int reqnum, int fd) STUB
void icpHandleIcpV3(int, Ip::Address &, char *, int) STUB
int icpCheckUdpHit(StoreEntry *, HttpRequest * request) STUB_RETVAL(0)
void icpConnectionsOpen(void) STUB
void icpConnectionShutdown(void) STUB
void icpConnectionClose(void) STUB
int icpSetCacheKey(const cache_key * key) STUB_RETVAL(0)
const cache_key *icpGetCacheKey(const char *url, int reqnum) STUB_RETVAL(NULL)
