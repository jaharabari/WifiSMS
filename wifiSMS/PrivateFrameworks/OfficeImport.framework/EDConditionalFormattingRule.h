/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSString, EDResources;



@interface EDConditionalFormattingRule : NSObject 
{
    EDResources *mResources;
    NSInteger mType;
    NSInteger mOperator;
    NSMutableArray *mFormulas;
    NSUInteger mDifferentialStyleIndex;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mStopIfTrue;

    NSInteger mPriority;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mAboveAverage;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mBottom;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mEqualAverage;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mPercent;

    NSUInteger mRank;
    NSInteger mStdDev;
    NSString *mText;
    NSInteger mTimePeriod;
}

+ (id)conditionalFormattingRuleWithResources:(id)arg1;

- (id)initWithResources:(id)arg1;
- (void)dealloc;
- (NSInteger)compareToOtherRuleUsingPriority:(id)arg1;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (NSInteger)operatorEnum;
- (void)setOperatorEnum:(NSInteger)arg1;
- (NSUInteger)formulaCount;
- (id)formulaAtIndex:(NSUInteger)arg1;
- (void)addFormula:(id)arg1;
- (id)differentialStyle;
- (void)setDifferentialStyle:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)stopIfTrue;
     /* Encoded args for previous method: B8@0:4 */

- (void)setStopIfTrue:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (NSInteger)priority;
- (void)setPriority:(NSInteger)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)aboveAverage;
     /* Encoded args for previous method: B8@0:4 */

- (void)setAboveAverage:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)bottom;
     /* Encoded args for previous method: B8@0:4 */

- (void)setBottom:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)equalAverage;
     /* Encoded args for previous method: B8@0:4 */

- (void)setEqualAverage:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)percent;
     /* Encoded args for previous method: B8@0:4 */

- (void)setPercent:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (NSUInteger)rank;
- (void)setRank:(NSUInteger)arg1;
- (NSInteger)stdDev;
- (void)setStdDev:(NSInteger)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (NSInteger)timePeriod;
- (void)setTimePeriod:(NSInteger)arg1;
- (NSUInteger)differentialStyleIndex;
- (void)setDifferentialStyleIndex:(NSUInteger)arg1;

@end
