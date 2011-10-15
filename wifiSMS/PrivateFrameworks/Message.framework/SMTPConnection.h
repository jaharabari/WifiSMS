/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray, NSMutableData, NSString;



@interface SMTPConnection : Connection 
{
    unsigned int _lastResponseCode : 31;
    unsigned int _hideLoggedData : 1;
    id _lastResponse;
    NSMutableArray *_serviceExtensions;
    NSMutableData *_mdata;
    NSString *_domainName;
    NSInteger _originalSocketTimeout;
    NSInteger _lastCommandTimestamp;
    id _delegate;
}

+ (void)initialize;

- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (NSInteger)state;
- (id)lastResponse;
- (NSUInteger)lastResponseCode;
- (id)domainName;
- (void)setDomainName:(id)arg1;
- (BOOL)supportsOutboxCopy;
- (BOOL)supportsPipelining;
- (unsigned long long)maximumMessageBytes;
- (id)authenticationMechanisms;
- (BOOL)authenticateUsingAccount:(id)arg1;
- (BOOL)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (BOOL)connectUsingAccount:(id)arg1;
- (NSInteger)mailFrom:(id)arg1;
- (NSInteger)rcptTo:(id)arg1;
- (NSInteger)noop;
- (NSInteger)sendData:(id)arg1;
- (NSInteger)quit;
- (void)abort;
- (id)dataForMailFrom:(id)arg1;
- (id)dataForRcptTo:(id)arg1;
- (id)dataForDataCmd;
- (NSInteger)mailFrom:(id)arg1 recipients:(id)arg2 withData:(id)arg3 host:(id)arg4 errorMessage:(id*)arg5 serverResponse:(id*)arg6 displayError:(BOOL*)arg7 errorCode:(NSInteger*)arg8;
- (long)timeLastCommandWasSent;
- (id)_dataForCommand:(const char *)arg1 length:(NSUInteger)arg2 argument:(id)arg3 trailer:(unsigned char)arg4;
- (NSInteger)_sendCommand:(const char *)arg1 length:(NSUInteger)arg2 argument:(id)arg3 trailer:(unsigned char)arg4;
- (NSInteger)_getReply;
- (void)_readResponseRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg1 isContinuation:(BOOL*)arg2;
- (BOOL)_connectUsingAccount:(id)arg1;
- (NSInteger)_doHandshakeUsingAccount:(id)arg1;
- (BOOL)_hasParameter:(id)arg1 forKeyword:(id)arg2;

@end
