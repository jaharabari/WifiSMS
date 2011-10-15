/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */



@interface MessageWriter : NSObject 
{
    unsigned int _createsMimeAlternatives : 1;
    unsigned int _createsRichText : 1;
    unsigned int _createsPlainTextOnly : 1;
    unsigned int _allows8BitMimeParts : 1;
    unsigned int _allowsBinaryMimeParts : 1;
    unsigned int _allowsAppleDoubleAttachments : 1;
    unsigned int _signsOutput : 1;
    unsigned int _encryptsOutput : 1;
    unsigned int _writeSizeDispositionParameter : 1;
    unsigned int _allowsQuotedPrintable : 1;
    NSUInteger _preferredEncoding;
    NSUInteger _encodingHint;
    id _delegate;
}


- (id)init;
- (void)dealloc;
- (void)appendDataForMimePart:(id)arg1 toData:(id)arg2 withPartData:(id)arg3;
- (id)createMessageWithString:(id)arg1 headers:(id)arg2;
- (id)createMessageWithPlainTextDocumentsAndAttachments:(id)arg1 headers:(id)arg2;
- (id)createMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 headers:(id)arg4;
- (id)createMessageWithHtmlString:(id)arg1 attachments:(id)arg2 headers:(id)arg3;
- (void)setDelegate:(id)arg1;
- (BOOL)createsMimeAlternatives;
- (void)setCreatesMimeAlternatives:(BOOL)arg1;
- (BOOL)createsPlainTextOnly;
- (void)setCreatesPlainTextOnly:(BOOL)arg1;
- (BOOL)createsRichText;
- (void)setCreatesRichText:(BOOL)arg1;
- (BOOL)allows8BitMimeParts;
- (void)setAllows8BitMimeParts:(BOOL)arg1;
- (BOOL)allowsBinaryMimeParts;
- (void)setAllowsBinaryMimeParts:(BOOL)arg1;
- (BOOL)allowsAppleDoubleAttachments;
- (void)setAllowsAppleDoubleAttachments:(BOOL)arg1;
- (BOOL)allowsQuotedPrintable;
- (void)setAllowsQuotedPrintable:(BOOL)arg1;
- (unsigned long)preferredEncoding;
- (void)setPreferredEncoding:(unsigned long)arg1;
- (unsigned long)encodingHint;
- (void)setEncodingHint:(unsigned long)arg1;
- (BOOL)signsOutput;
- (void)setSignsOutput:(BOOL)arg1;
- (BOOL)encryptsOutput;
- (void)setEncryptsOutput:(BOOL)arg1;
- (void)setWriteSizeDispositionParameter:(BOOL)arg1;

@end
