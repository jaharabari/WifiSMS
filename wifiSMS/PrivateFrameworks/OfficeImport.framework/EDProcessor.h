/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray;



@interface EDProcessor : NSObject 
{
    NSMutableArray *mObjects;
}


- (id)init;
- (void)dealloc;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isObjectSupported:(id)arg1;
     /* Encoded args for previous method: B12@0:4@8 */

- (void)markObjectForPostProcessing:(id)arg1;
- (void)applyProcessorWithWorkbook:(id)arg1;
- (void)applyProcessorToObject:(id)arg1 withWorkbook:(id)arg2;

@end
