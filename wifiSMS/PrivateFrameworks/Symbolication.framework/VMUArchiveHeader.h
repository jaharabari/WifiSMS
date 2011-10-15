/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSMutableArray, NSString;



@interface VMUArchiveHeader : VMUHeader 
{
    NSMutableArray *_headers;
    NSString *_path;
}

+ (id)archiveHeaderWithMemory:(id)arg1 path:(id)arg2 timestamp:(id)arg3;

- (id)initWithMemory:(id)arg1 path:(id)arg2 timestamp:(id)arg3;
- (void)dealloc;
- (BOOL)isArchive;
- (id)headers;
- (id)architecture;
- (id)description;

@end
