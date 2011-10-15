/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, LBSGCell;



@interface LBSGCellularProfile : PBCodable 
{
    LBSGCell *_primaryCell;
    long long _timestamp;
    NSMutableArray *_neighborss;
    NSMutableArray *_historicalCellss;
    NSInteger _prefetchMode;
    BOOL _hasPrefetchMode;
}

@property(readonly) NSInteger neighborssCount;
@property(readonly) NSInteger historicalCellssCount;
@property(readonly) BOOL hasPrefetchMode; /* unknown property attribute: V_hasPrefetchMode */
@property NSInteger prefetchMode; /* unknown property attribute: V_prefetchMode */
@property(retain) NSMutableArray *historicalCellss; /* unknown property attribute: V_historicalCellss */
@property(retain) NSMutableArray *neighborss; /* unknown property attribute: V_neighborss */
@property long long timestamp; /* unknown property attribute: V_timestamp */
@property(retain) LBSGCell *primaryCell; /* unknown property attribute: V_primaryCell */


- (id)init;
- (void)dealloc;
- (NSInteger)neighborssCount;
- (void)setNeighbors:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)neighborsAtIndex:(NSUInteger)arg1;
- (void)addNeighbors:(id)arg1;
- (NSInteger)historicalCellssCount;
- (void)setHistoricalCells:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)historicalCellsAtIndex:(NSUInteger)arg1;
- (void)addHistoricalCells:(id)arg1;
- (void)setPrefetchMode:(NSInteger)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPrefetchMode;
- (NSInteger)prefetchMode;
- (id)historicalCellss;
- (void)setHistoricalCellss:(id)arg1;
- (id)neighborss;
- (void)setNeighborss:(id)arg1;
- (long long)timestamp;
- (void)setTimestamp:(long long)arg1;
- (id)primaryCell;
- (void)setPrimaryCell:(id)arg1;

@end
