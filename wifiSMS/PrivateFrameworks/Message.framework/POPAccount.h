/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSConditionLock, NSArray, NSString, ActivityMonitor, MFLock, POP3Connection;



@interface POPAccount : MailAccount 
{
    ActivityMonitor *_fetchMonitor;
    POP3Connection *_connection;
    NSConditionLock *_sharedConnectionCondition;
    NSUInteger _connectionsInUse;
    NSArray *_currentUIDs;
    MFLock *_connectionActivityLock;
    float _connectionTimeout;
    BOOL _fetcherNeedsReset;
    BOOL _deletingMessages;
    BOOL _hasDoneBackgroundSynchronization;
    BOOL _shouldAttemptAPOP;
    NSString *_oldestMessageUID;
    NSString *_newestMessageUID;
    NSInteger _numberOfKnownUIDs;
}

+ (id)accountTypeString;
+ (id)saslProfileName;

- (id)init;
- (void)dealloc;
- (void)finalize;
- (NSInteger)fetchSynchronously;
- (NSInteger)fetchSynchronouslyLite;
- (NSInteger)fetchNumNewMessages:(NSUInteger)arg1 oldMessages:(NSUInteger)arg2 preservingUID:(id)arg3 withStore:(id)arg4;
- (void)releaseAllConnections;
- (void)releaseAllForcedConnections;
- (BOOL)canGoOffline;
- (void)setIsOffline:(BOOL)arg1;
- (NSUInteger)defaultPortNumber;
- (NSUInteger)defaultSecurePortNumber;
- (id)serviceName;
- (id)secureServiceName;
- (BOOL)requiresAuthentication;
- (Class)storeClass;
- (Class)storeClassForMailbox:(id)arg1;
- (Class)connectionClass;
- (void)setPreferredAuthScheme:(id)arg1;
- (id)mailboxPathExtension;
- (BOOL)canCreateNewMailboxes;
- (BOOL)canMailboxBeRenamed:(id)arg1;
- (NSInteger)bigMessageWarningSize;
- (void)setBigMessageWarningSize:(NSInteger)arg1;
- (BOOL)shouldAttemptAPOP;
- (void)setShouldAttemptAPOP:(BOOL)arg1;
- (void)setMessageDeletionPolicy:(NSInteger)arg1;
- (void)setDelayedMessageDeletionInterval:(NSUInteger)arg1;
- (NSInteger)messageDeletionPolicy;
- (NSUInteger)delayedMessageDeletionInterval;
- (BOOL)deletingMessages;
- (void)deleteMessagesNow:(id)arg1;
- (void)deleteSeenMessagesNow;
- (void)insertInMailboxes:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)acquireConnectionActivityLock;
- (void)relinquishConnectionActivityLock;
- (id)_URLScheme;
- (void)setOldestKnownMessageUID:(id)arg1;
- (void)setNewestKnownMessageUID:(id)arg1;
- (id)oldestKnownMessageUID;
- (id)newestKnownMessageUID;
- (void)setNumberOfKnownUIDs:(NSInteger)arg1;
- (NSInteger)numberOfKnownUIDs;
- (void)_deleteHook;
- (NSUInteger)connectionsInUse;
- (id)_getCachedConnection;
- (id)_createNewConnection;
- (id)authenticatedConnection;
- (void)checkInConnection:(id)arg1 currentUIDs:(id)arg2;
- (void)scheduleDisconnect;
- (void)closeConnection:(id)arg1 andSaveUIDs:(id)arg2;
- (void)closeCachedConnectionForcedOnly:(id)arg1;
- (void)closeCachedConnection;
- (id)loginName;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;

@end
