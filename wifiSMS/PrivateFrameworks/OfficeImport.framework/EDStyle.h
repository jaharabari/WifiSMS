/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDProtection, EDResources;



@interface EDStyle : NSObject <NSCopying, EDImmutableObject>
{
    EDResources *mResources;
    NSUInteger mParentIndex;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mContentFormatOverridden;

    NSUInteger mContentFormatId;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mFontOverridden;

    NSUInteger mFontIndex;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mFillOverridden;

    NSUInteger mFillIndex;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mAlignmentInfoOverridden;

    NSUInteger mAlignmentInfoIndex;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mBordersOverridden;

    NSUInteger mBordersIndex;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mProtectionOverridden;

    EDProtection *mProtection;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mDoNotModify;

    NSUInteger mIndex;
}

+ (id)styleWithResources:(id)arg1;

- (id)initWithResources:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEquivalentToStyle:(id)arg1;
- (BOOL)isEqualToStyle:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isContentFormatOverridden;
     /* Encoded args for previous method: B8@0:4 */

- (void)setContentFormatOverridden:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (id)contentFormat;
- (void)setContentFormat:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isFontOverridden;
     /* Encoded args for previous method: B8@0:4 */

- (void)setFontOverridden:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (id)font;
- (void)setFont:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isFillOverridden;
     /* Encoded args for previous method: B8@0:4 */

- (void)setFillOverridden:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (id)fill;
- (void)setFill:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isAlignmentInfoOverridden;
     /* Encoded args for previous method: B8@0:4 */

- (void)setAlignmentInfoOverridden:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (id)alignmentInfo;
- (void)setAlignmentInfo:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isBordersOverridden;
     /* Encoded args for previous method: B8@0:4 */

- (void)setBordersOverridden:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (id)borders;
- (void)setBorders:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isProtectionOverridden;
     /* Encoded args for previous method: B8@0:4 */

- (void)setProtectionOverridden:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (id)protection;
- (void)setProtection:(id)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (NSUInteger)index;
- (void)setDoNotModify:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (NSUInteger)fontIndex;
- (void)setFontIndex:(NSUInteger)arg1;
- (NSUInteger)contentFormatId;
- (void)setContentFormatId:(NSUInteger)arg1;
- (NSUInteger)parentIndex;
- (void)setParentIndex:(NSUInteger)arg1;
- (NSUInteger)bordersIndex;
- (void)setBordersIndex:(NSUInteger)arg1;
- (NSUInteger)fillIndex;
- (void)setFillIndex:(NSUInteger)arg1;
- (NSUInteger)alignmentInfoIndex;
- (void)setAlignmentInfoIndex:(NSUInteger)arg1;
- (void)setIndex:(NSInteger)arg1;

@end
