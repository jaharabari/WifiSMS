/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSMutableArray, NSMutableSet;



@interface ISPurchaseQueue : NSObject <ISSingleton>
{
    id _canPurchaseBatchInfo;
    NSMutableArray *_pendingPurchases;
    NSMutableSet *_purchasedItems;
}

@property(readonly) NSInteger numberOfPendingPurchases;

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)beginCanPurchaseBatch;
- (BOOL)canPurchaseItems:(id)arg1 returningError:(id*)arg2;
- (void)endCanPurchaseBatch;
- (void)enqueuePurchases:(id)arg1;
- (BOOL)itemIsPurchased:(id)arg1;
- (NSInteger)numberOfPendingPurchases;
- (void)_daemonExited:(id)arg1;
- (void)_mainThreadDaemonExited:(id)arg1;
- (void)_purchaseFailed:(id)arg1;
- (void)_purchaseFinished:(id)arg1;
- (void)addItemToPurchasedSet:(unsigned long long)arg1;
- (void)removeItemFromPurchasedSet:(unsigned long long)arg1;
- (void)_sendFailureForItemIdentifier:(id)arg1;
- (void)_sendFinishForItemIdentifier:(id)arg1;
- (void)_sendRemovedForItemIdentifier:(id)arg1;

@end