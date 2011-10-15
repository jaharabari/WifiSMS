/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSMutableArray, WebHistoryItem;



@interface WebHistoryPrivate : NSObject 
{
    NSMutableDictionary *_entriesByURL;
    struct HashMap<long long int,WTF::RetainPtr<NSMutableArray>,WTF::IntHash<long long unsigned int>,WTF::HashTraits<long long int>,WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > { struct HashTable<long long int,std::pair<long long int, WTF::RetainPtr<NSMutableArray> >,WTF::PairFirstExtractor<std::pair<long long int, WTF::RetainPtr<NSMutableArray> > >,WTF::IntHash<long long unsigned int>,WTF::PairHashTraits<WTF::HashTraits<long long int>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > >,WTF::HashTraits<long long int> > { 
            struct pair<long long int,WTF::RetainPtr<NSMutableArray> > {} *m_table; 
            NSInteger m_tableSize; 
            NSInteger m_tableSizeMask; 
            NSInteger m_keyCount; 
            NSInteger m_deletedCount; 
        } x1; } *_entriesByDate;
    NSMutableArray *_orderedLastVisitedDays;
    WebHistoryItem *_lastVisitedEntry;
    BOOL itemLimitSet;
    NSInteger itemLimit;
    BOOL ageInDaysLimitSet;
    NSInteger ageInDaysLimit;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)finalize;
- (BOOL)findKey:(long long*)arg1 forDay:(double)arg2;
- (void)insertItem:(id)arg1 forDateKey:(long long)arg2;
- (BOOL)removeItemFromDateCaches:(id)arg1;
- (BOOL)removeItemForURLString:(id)arg1;
- (void)addItemToDateCaches:(id)arg1;
- (id)visitedURL:(id)arg1 withTitle:(id)arg2;
- (BOOL)addItem:(id)arg1 discardDuplicate:(BOOL)arg2;
- (BOOL)removeItem:(id)arg1;
- (BOOL)removeItems:(id)arg1;
- (BOOL)removeAllItems;
- (void)addItems:(id)arg1;
- (id)orderedLastVisitedDays;
- (id)orderedItemsLastVisitedOnDay:(id)arg1;
- (id)itemForURLString:(id)arg1;
- (BOOL)containsURL:(id)arg1;
- (id)itemForURL:(id)arg1;
- (id)allItems;
- (void)setHistoryAgeInDaysLimit:(NSInteger)arg1;
- (NSInteger)historyAgeInDaysLimit;
- (void)setHistoryItemLimit:(NSInteger)arg1;
- (NSInteger)historyItemLimit;
- (id)ageLimitDate;
- (id)arrayRepresentation;
- (BOOL)loadHistoryGutsFromURL:(id)arg1 savedItemsCount:(NSInteger*)arg2 collectDiscardedItemsInto:(id)arg3 error:(id*)arg4;
- (BOOL)loadFromURL:(id)arg1 collectDiscardedItemsInto:(id)arg2 error:(id*)arg3;
- (BOOL)saveHistoryGuts:(NSInteger*)arg1 URL:(id)arg2 error:(id*)arg3;
- (BOOL)saveToURL:(id)arg1 error:(id*)arg2;
- (void)addVisitedLinksToPageGroup:(struct PageGroup { struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; struct HashSet<WebCore::Page*,WTF::PtrHash<WebCore::Page*>,WTF::HashTraits<WebCore::Page*> > { struct HashTable<WebCore::Page*,WebCore::Page*,WTF::IdentityExtractor<WebCore::Page*>,WTF::PtrHash<WebCore::Page*>,WTF::HashTraits<WebCore::Page*>,WTF::HashTraits<WebCore::Page*> > { struct Page {} **x_1_2_1; NSInteger x_1_2_2; NSInteger x_1_2_3; NSInteger x_1_2_4; NSInteger x_1_2_5; } x_2_1_1; } x2; struct HashSet<long long unsigned int,WebCore::LinkHashHash,WTF::HashTraits<long long unsigned int> > { struct HashTable<long long unsigned int,long long unsigned int,WTF::IdentityExtractor<long long unsigned int>,WebCore::LinkHashHash,WTF::HashTraits<long long unsigned int>,WTF::HashTraits<long long unsigned int> > { unsigned long long *x_1_2_1; NSInteger x_1_2_2; NSInteger x_1_2_3; NSInteger x_1_2_4; NSInteger x_1_2_5; } x_3_1_1; } x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; NSUInteger x5; struct RefPtr<WebCore::LocalStorage> { struct LocalStorage {} *x_6_1_1; } x6; }*)arg1;
     /* Encoded args for previous method: v12@0:4^{PageGroup={String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{HashSet<WebCore::Page*,WTF::PtrHash<WebCore::Page*>,WTF::HashTraits<WebCore::Page*> >={HashTable<WebCore::Page*,WebCore::Page*,WTF::IdentityExtractor<WebCore::Page*>,WTF::PtrHash<WebCore::Page*>,WTF::HashTraits<WebCore::Page*>,WTF::HashTraits<WebCore::Page*> >=^^{Page}iiii}}{HashSet<long long unsigned int,WebCore::LinkHashHash,WTF::HashTraits<long long unsigned int> >={HashTable<long long unsigned int,long long unsigned int,WTF::IdentityExtractor<long long unsigned int>,WebCore::LinkHashHash,WTF::HashTraits<long long unsigned int>,WTF::HashTraits<long long unsigned int> >=^Qiiii}}BI{RefPtr<WebCore::LocalStorage>=^{LocalStorage}}}8 */

- (id)lastVisitedEntry;
- (void)setLastVisitedEntry:(id)arg1;

@end
