/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDWorksheet, EDResources;



@interface EDRows : EDSortedCollection 
{
    EDResources *mResources;
    EDWorksheet *mWorksheet;
}


- (id)initWithWorksheet:(id)arg1 resources:(id)arg2;
- (void)dealloc;
- (NSUInteger)addObject:(id)arg1;
- (id)rowWithRowNumber:(NSInteger)arg1;
- (id)rowCreateIfNilWithRowNumber:(NSInteger)arg1;
- (id)cellWithRowNumber:(NSInteger)arg1 columnNumber:(NSInteger)arg2;
- (id)cellCreateIfNilWithRowNumber:(NSInteger)arg1 columnNumber:(NSInteger)arg2;

@end
