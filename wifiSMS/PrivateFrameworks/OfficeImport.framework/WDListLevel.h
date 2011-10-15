/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDOfficeArt, WDCharacterProperties, WDParagraphProperties, NSMutableString;



@interface WDListLevel : NSObject 
{
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDOfficeArt *mImage;
    NSInteger mStartNumber;
    NSInteger mNumberFormat;
    BOOL mRestartNumbering;
    BOOL mLegal;
    NSInteger mSuffix;
    NSMutableString *mText;
    BOOL mLegacy;
    NSInteger mLegacySpace;
    NSInteger mLegacyIndent;
    NSInteger mJustification;
}


- (id)initWithDocument:(id)arg1;
- (void)dealloc;
- (long)startNumber;
- (void)setStartNumber:(long)arg1;
- (BOOL)startNumberOverridden;
- (NSInteger)numberFormat;
- (void)setNumberFormat:(NSInteger)arg1;
- (BOOL)numberFormatOverridden;
- (BOOL)imageBullet;
- (BOOL)imageBulletOverridden;
- (id)image;
- (void)setImage:(id)arg1;
- (BOOL)restartNumbering;
- (void)setRestartNumbering:(BOOL)arg1;
- (BOOL)restartNumberingOverridden;
- (BOOL)legal;
- (void)setLegal:(BOOL)arg1;
- (BOOL)legalOverridden;
- (NSInteger)suffix;
- (void)setSuffix:(NSInteger)arg1;
- (BOOL)suffixOverridden;
- (id)text;
- (void)setText:(id)arg1;
- (BOOL)textOverridden;
- (BOOL)legacy;
- (void)setLegacy:(BOOL)arg1;
- (long)legacySpace;
- (void)setLegacySpace:(long)arg1;
- (long)legacyIndent;
- (void)setLegacyIndent:(long)arg1;
- (NSInteger)justification;
- (void)setJustification:(NSInteger)arg1;
- (BOOL)justificationOverridden;
- (id)paragraphProperties;
- (id)characterProperties;

@end
