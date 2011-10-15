/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSDate, NSString, NSMutableData, NSHTTPURLResponse;



@interface YTAccountAuthenticator : NSObject 
{
    NSString *_accountToken;
    NSDate *_accountTokenDate;
    NSString *_account;
    NSString *_accountYouTubeName;
    NSString *_password;
    NSMutableData *_responseData;
    NSHTTPURLResponse *_urlResponse;
    NSString *_authURLBase;
}

+ (id)sharedAuthenticator;

- (id)init;
- (void)dealloc;
- (BOOL)readyToRequestToken;
- (id)accountYouTubeName;
- (id)tokenForCurrentAccount;
- (void)validateAccount:(id)arg1 password:(id)arg2;
- (BOOL)_isTokenExpired:(id)arg1;
- (id)_authRequestWithURL:(id)arg1;
- (id)_authRequestForAccount:(id)arg1 password:(id)arg2;
- (void)_getNewTokenForAccount:(id)arg1 password:(id)arg2;
- (void)_setAccountToken:(id)arg1;
- (void)_setAccountTokenDate:(id)arg1;
- (void)_setAccount:(id)arg1;
- (void)_setAccountYouTubeName:(id)arg1;
- (void)_setPassword:(id)arg1;
- (void)_setURLResponse:(id)arg1;
- (void)_clearURLResponseInfo;
- (void)_removePasswordFromKeychain;
- (void)clearAccountInfo;
- (void)_postAccountTokenGenerationFailedWithError:(id)arg1;
- (id)_passwordFromKeychain;
- (void)_postNewAccountTokenAvailable;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;

@end
