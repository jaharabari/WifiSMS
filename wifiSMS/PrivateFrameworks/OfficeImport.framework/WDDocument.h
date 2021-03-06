/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTheme, WDRevisionAuthorTable, WDText, OCDSummary, NSMutableArray, NSDate, NSString, OADBackground, OADDrawingGroup, WDListDefinitionTable, WDListTable, ESDContainer, WDStyleSheet, WDFontTable;



@interface WDDocument : NSObject 
{
    OCDSummary *mSummary;
    WDStyleSheet *mStyleSheet;
    WDFontTable *mFontTable;
    WDListDefinitionTable *mListDefinitionTable;
    WDRevisionAuthorTable *mRevisionAuthorTable;
    WDListTable *mListTable;
    NSMutableArray *mSections;
    BOOL mMirrorMargins;
    BOOL mBorderSurroundHeader;
    BOOL mBorderSurroundFooter;
    unsigned short mDefaultTabWidth;
    BOOL mAutoHyphenate;
    BOOL mEvenAndOddHeaders;
    WDText *mImageBulletText;
    WDText *mFootnoteSeparator;
    WDText *mFootnoteContinuationSeparator;
    WDText *mFootnoteContinuationNotice;
    WDText *mEndnoteSeparator;
    WDText *mEndnoteContinuationSeparator;
    WDText *mEndnoteContinuationNotice;
    NSInteger mFootnoteNumberFormat;
    NSInteger mEndnoteNumberFormat;
    NSInteger mFootnotePosition;
    NSInteger mEndnotePosition;
    NSInteger mFootnoteRestart;
    NSInteger mEndnoteRestart;
    unsigned short mFootnoteNumberingStart;
    NSInteger mGutterPosition;
    NSString *mOleFilename;
    BOOL mBookFold;
    short mZoomPercentage;
    NSString *mVersion;
    BOOL mShowMarkup;
    BOOL mShowComments;
    BOOL mTrackChanges;
    BOOL mShowRevisionMarksOnScreen;
    BOOL mShowInsertionsAndDeletions;
    BOOL mShowFormatting;
    NSMutableArray *mDocumentImages;
    NSMutableArray *mTextBoxes;
    NSMutableArray *mChangeTrackingEditDates;
    NSMutableArray *mChangeTrackingEditAuthors;
    NSDate *mCreationDate;
    ESDContainer *mExportDrawingGroup;
    ESDContainer *mExportMainDrawing;
    ESDContainer *mExportHeadersDrawing;
    NSMutableArray *mExportMainStories;
    NSMutableArray *mExportHeadersStories;
    NSMutableArray *mImageBullets;
    OADDrawingGroup *mDrawingGroup;
    NSInteger mZIndexTotalForMainText;
    NSInteger mZIndexTotalForHeaderFooterText;
    OADBackground *mDocumentBackground;
    OADTheme *mTheme;
}

+ (NSInteger)thumbnailCutOff;

- (id)init;
- (void)dealloc;
- (id)summary;
- (id)styleSheet;
- (id)fontTable;
- (id)sections;
- (NSInteger)sectionCount;
- (id)sectionAt:(NSInteger)arg1;
- (id)lastSection;
- (id)addSection;
- (BOOL)mirrorMargins;
- (void)setMirrorMargins:(BOOL)arg1;
- (BOOL)borderSurroundHeader;
- (void)setBorderSurroundHeader:(BOOL)arg1;
- (BOOL)borderSurroundFooter;
- (void)setBorderSurroundFooter:(BOOL)arg1;
- (unsigned short)defaultTabWidth;
- (void)setDefaultTabWidth:(unsigned short)arg1;
- (BOOL)autoHyphenate;
- (void)setAutoHyphenate:(BOOL)arg1;
- (BOOL)evenAndOddHeaders;
- (void)setEvenAndOddHeaders:(BOOL)arg1;
- (id)footnoteSeparator;
- (id)footnoteContinuationSeparator;
- (id)footnoteContinuationNotice;
- (id)endnoteSeparator;
- (id)endnoteContinuationSeparator;
- (id)endnoteContinuationNotice;
- (NSInteger)footnoteNumberFormat;
- (void)setFootnoteNumberFormat:(NSInteger)arg1;
- (NSInteger)endnoteNumberFormat;
- (void)setEndnoteNumberFormat:(NSInteger)arg1;
- (NSInteger)footnotePosition;
- (void)setFootnotePosition:(NSInteger)arg1;
- (NSInteger)endnotePosition;
- (void)setEndnotePosition:(NSInteger)arg1;
- (NSInteger)footnoteRestart;
- (void)setFootnoteRestart:(NSInteger)arg1;
- (NSInteger)endnoteRestart;
- (void)setEndnoteRestart:(NSInteger)arg1;
- (unsigned short)footnoteNumberingStart;
- (void)setFootnoteNumberingStart:(unsigned short)arg1;
- (id)listDefinitionTable;
- (NSInteger)listDefinitionCount;
- (id)listDefinitionAt:(NSInteger)arg1;
- (id)listDefinitionWithId:(NSInteger)arg1;
- (id)addListDefinition;
- (id)listTable;
- (NSInteger)listCount;
- (id)listAt:(NSInteger)arg1;
- (id)addList:(id)arg1;
- (NSInteger)gutterPosition;
- (void)setGutterPosition:(NSInteger)arg1;
- (id)oleFilename;
- (void)setOleFilename:(id)arg1;
- (BOOL)bookFold;
- (void)setBookFold:(BOOL)arg1;
- (short)zoomPercentage;
- (void)setZoomPercentage:(short)arg1;
- (id)applicationName;
- (id)imageBulletWithCharacterOffset:(NSInteger)arg1;
- (id)addImageBulletText;
- (id)imageBulletParagraph;
- (id)imageBullets;
- (void)addImageBullets;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)revisionAuthorTable;
- (NSInteger)revisionAuthorCount;
- (id)revisionAuthorAt:(NSInteger)arg1;
- (NSInteger)revisionAuthorAddLookup:(id)arg1;
- (void)addRevisionAuthor:(id)arg1;
- (BOOL)showMarkup;
- (void)setShowMarkup:(BOOL)arg1;
- (BOOL)showComments;
- (void)setShowComments:(BOOL)arg1;
- (BOOL)trackChanges;
- (void)setTrackChanges:(BOOL)arg1;
- (BOOL)showRevisionMarksOnScreen;
- (void)setShowRevisionMarksOnScreen:(BOOL)arg1;
- (BOOL)showInsertionsAndDeletions;
- (void)setShowInsertionsAndDeletions:(BOOL)arg1;
- (BOOL)showFormatting;
- (void)setShowFormatting:(BOOL)arg1;
- (void)addChangeTrackingEditAtDate:(id)arg1 authorIndex:(NSInteger)arg2;
- (id)changeTrackingEditDates;
- (id)changeTrackingEditAuthors;
- (id)creationDate;
- (void)setCreationDate:(id)arg1;
- (id)imageBulletText;
- (NSInteger)textBoxesCount;
- (void)addTextBox:(id)arg1;
- (id)textBoxAtIndex:(NSInteger)arg1;
- (void)setDocumentBackground:(id)arg1;
- (id)documentBackground;
- (id)theme;
- (void)removeEmptySections;
- (id)drawingGroup;
- (NSInteger)zIndexTotalForMainText;
- (void)setZIndexTotalForMainText:(NSInteger)arg1;
- (NSInteger)zIndexTotalForHeaderFooterText;
- (void)setZIndexTotalForHeaderFooterText:(NSInteger)arg1;
- (id)sectionIterator;
- (id)mainBlocksIterator;
- (id)mainRunsIterator;
- (id)footnoteIterator;
- (id)endnoteIterator;
- (id)annotationIterator;
- (id)footnoteBlockIterator;
- (id)endnoteBlockIterator;
- (id)annotationBlockIterator;
- (id)exportMainStoriesIterator;
- (id)exportHeadersStoriesIterator;
- (id)existingExportDrawingGroup;
- (void)setExportDrawingGroup:(id)arg1;
- (id)existingExportMainDrawing;
- (void)setExportMainDrawing:(id)arg1;
- (id)existingExportHeadersDrawing;
- (void)setExportHeadersDrawing:(id)arg1;
- (id)exportMainStories;
- (id)exportHeadersStories;
- (id)addStoryForShape:(id)arg1;

@end
