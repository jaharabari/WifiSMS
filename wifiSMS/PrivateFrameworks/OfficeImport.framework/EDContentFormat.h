/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDString;



@interface EDContentFormat : NSObject <EDKeyedObject, NSCopying>
{
    EDString *mFormatString;
    NSUInteger mFormatId;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mBuiltIn;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mReferenced;

}

+ (id)contentFormatWithFormatString:(id)arg1;
+ (id)contentFormatWithFormatString:(id)arg1 formatId:(NSUInteger)arg2;
+ (id)contentFormatWithNSString:(id)arg1 formatId:(NSUInteger)arg2 builtIn:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg3;
     /* Encoded args for previous method: @20@0:4@8I12B16 */


- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqualToContentFormat:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (NSInteger)key;
- (id)formatString;
- (NSUInteger)formatId;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)builtIn;
     /* Encoded args for previous method: B8@0:4 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)referenced;
     /* Encoded args for previous method: B8@0:4 */

- (void)setFormatId:(NSUInteger)arg1;
- (void)setReferenced:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */


@end
