/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUStorePageViewControllerDelegate>, NSDictionary, NSString, UISegmentedControl, SUPageSectionGroup, SUViewController, NSURL;



@interface SUStorePageViewController : SUViewController <ISURLOperationDelegate>
{
    SUViewController *_activeChildViewController;
    <SUStorePageViewControllerDelegate> *_delegate;
    BOOL _loadingForSectionChange;
    NSInteger _pageType;
    SUViewController *_pendingChildViewController;
    struct __CFRunLoopTimer { } *_refreshTimer;
    BOOL _reloadOnAppear;
    BOOL _shouldFetchAutomatically;
    NSDictionary *_customHeaders;
    BOOL _needsAuthentication;
    NSDictionary *_queryStringDictionary;
    NSURL *_url;
    NSString *_urlBagKey;
    NSInteger _activeSectionIndex;
    UISegmentedControl *_sectionSwitchControl;
    SUPageSectionGroup *_sectionsGroup;
}

@property(retain) NSString *urlBagKey; /* unknown property attribute: V_urlBagKey */
@property(retain) NSURL *url; /* unknown property attribute: V_url */
@property BOOL shouldFetchAutomatically; /* unknown property attribute: V_shouldFetchAutomatically */
@property(retain) NSDictionary *queryStringDictionary; /* unknown property attribute: V_queryStringDictionary */
@property BOOL needsAuthentication; /* unknown property attribute: V_needsAuthentication */
@property <SUStorePageViewControllerDelegate> *delegate; /* unknown property attribute: V_delegate */
@property(retain) NSDictionary *customHeaders; /* unknown property attribute: V_customHeaders */


- (id)init;
- (id)initWithSection:(id)arg1;
- (void)dealloc;
- (id)createFetchOperation;
- (id)createPlaceholderViewController;
- (id)createViewControllerForPage:(id)arg1 ofType:(NSInteger)arg2 returningError:(id*)arg3;
- (void)handleFailureWithError:(id)arg1;
- (void)invalidate;
- (void)reload;
- (void)resetNavigationItem:(id)arg1;
- (void)showPlaceholderViewController;
- (id)copyArchivableContext;
- (id)displayedURL;
- (BOOL)loadMoreWithURL:(id)arg1;
- (void)loadView;
- (void)purgeMemoryForReason:(NSInteger)arg1;
- (BOOL)pushStorePageWithURL:(id)arg1 withAuthentication:(BOOL)arg2 animated:(BOOL)arg3;
- (void)reloadForNetworkTypeChange;
- (BOOL)reloadForSectionsWithGroup:(id)arg1;
- (BOOL)reloadWithURL:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)_sectionControlAction:(id)arg1;
- (void)_delayedFetchPage;
- (void)_fetchPage:(BOOL)arg1;
- (void)_finishSuccessfulLoad;
- (void)_fireRefreshTimer;
- (void)_reloadForOutput:(id)arg1 ofType:(NSInteger)arg2 fromURL:(id)arg3;
- (void)_resetRefreshTimerWithTimeInterval:(double)arg1;
- (void)_setActiveChildViewController:(id)arg1;
- (void)_setPendingChildViewController:(id)arg1;
- (id)urlBagKey;
- (void)setUrlBagKey:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (BOOL)shouldFetchAutomatically;
- (void)setShouldFetchAutomatically:(BOOL)arg1;
- (id)queryStringDictionary;
- (void)setQueryStringDictionary:(id)arg1;
- (BOOL)needsAuthentication;
- (void)setNeedsAuthentication:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)customHeaders;
- (void)setCustomHeaders:(id)arg1;

@end
