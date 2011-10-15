/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSMutableArray, NSMutableURLRequest;



@interface YTCategoriesRequest : XMLSAXHTTPRequest 
{
    id _delegate;
    NSMutableArray *_categories;
    NSMutableURLRequest *_deferredRequest;
}


- (id)init;
- (void)_listenForAuthenticationNotifications:(BOOL)arg1;
- (void)dealloc;
- (NSInteger)parseData:(id)arg1;
- (void)didParseData;
- (void)_didAuthenticate:(id)arg1;
- (void)_failedToAuthenticate:(id)arg1;
- (void)loadRequest:(id)arg1;
- (id)_categoriesURL;
- (void)requestCategoriesWithDelegate:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)clearDelegate;

@end
