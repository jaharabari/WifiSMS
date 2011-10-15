/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface DOMDocument : DOMNode 
{
}

@property(retain,readonly) DOMDocumentType *doctype;
@property(retain,readonly) DOMImplementation *implementation;
@property(retain,readonly) DOMElement *documentElement;
@property(retain,readonly) DOMAbstractView *defaultView;
@property(retain,readonly) DOMStyleSheetList *styleSheets;
@property(copy) NSString *title;
@property(copy,readonly) NSString *referrer;
@property(copy,readonly) NSString *domain;
@property(copy,readonly) NSString *URL;
@property(copy) NSString *cookie;
@property(retain) DOMHTMLElement *body;
@property(retain,readonly) DOMHTMLCollection *images;
@property(retain,readonly) DOMHTMLCollection *applets;
@property(retain,readonly) DOMHTMLCollection *links;
@property(retain,readonly) DOMHTMLCollection *forms;
@property(retain,readonly) DOMHTMLCollection *anchors;


- (id)doctype;
- (id)implementation;
- (id)documentElement;
- (id)inputEncoding;
- (id)xmlEncoding;
- (id)xmlVersion;
- (void)setXmlVersion:(id)arg1;
- (BOOL)xmlStandalone;
- (void)setXmlStandalone:(BOOL)arg1;
- (id)documentURI;
- (void)setDocumentURI:(id)arg1;
- (id)defaultView;
- (id)styleSheets;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)referrer;
- (id)domain;
- (id)URL;
- (id)cookie;
- (void)setCookie:(id)arg1;
- (id)body;
- (void)setBody:(id)arg1;
- (id)images;
- (id)applets;
- (id)links;
- (id)forms;
- (id)anchors;
- (id)lastModified;
- (id)charset;
- (void)setCharset:(id)arg1;
- (id)defaultCharset;
- (id)readyState;
- (id)characterSet;
- (id)preferredStylesheetSet;
- (id)selectedStylesheetSet;
- (void)setSelectedStylesheetSet:(id)arg1;
- (id)createElement:(id)arg1;
- (id)createDocumentFragment;
- (id)createTextNode:(id)arg1;
- (id)createComment:(id)arg1;
- (id)createCDATASection:(id)arg1;
- (id)createProcessingInstruction:(id)arg1 data:(id)arg2;
- (id)createProcessingInstruction:(id)arg1 :(id)arg2;
- (id)createAttribute:(id)arg1;
- (id)createEntityReference:(id)arg1;
- (id)getElementsByTagName:(id)arg1;
- (id)importNode:(id)arg1 deep:(BOOL)arg2;
- (id)importNode:(id)arg1 :(BOOL)arg2;
- (id)createElementNS:(id)arg1 qualifiedName:(id)arg2;
- (id)createElementNS:(id)arg1 :(id)arg2;
- (id)createAttributeNS:(id)arg1 qualifiedName:(id)arg2;
- (id)createAttributeNS:(id)arg1 :(id)arg2;
- (id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2;
- (id)getElementsByTagNameNS:(id)arg1 :(id)arg2;
- (id)getElementById:(id)arg1;
- (id)adoptNode:(id)arg1;
- (id)createEvent:(id)arg1;
- (id)createRange;
- (id)createNodeIterator:(id)arg1 whatToShow:(NSUInteger)arg2 filter:(id)arg3 expandEntityReferences:(BOOL)arg4;
- (id)createNodeIterator:(id)arg1 :(NSUInteger)arg2 :(id)arg3 :(BOOL)arg4;
- (id)createTreeWalker:(id)arg1 whatToShow:(NSUInteger)arg2 filter:(id)arg3 expandEntityReferences:(BOOL)arg4;
- (id)createTreeWalker:(id)arg1 :(NSUInteger)arg2 :(id)arg3 :(BOOL)arg4;
- (id)getOverrideStyle:(id)arg1 pseudoElement:(id)arg2;
- (id)getOverrideStyle:(id)arg1 :(id)arg2;
- (id)createExpression:(id)arg1 resolver:(id)arg2;
- (id)createExpression:(id)arg1 :(id)arg2;
- (id)createNSResolver:(id)arg1;
- (id)evaluate:(id)arg1 contextNode:(id)arg2 resolver:(id)arg3 type:(unsigned short)arg4 inResult:(id)arg5;
- (id)evaluate:(id)arg1 :(id)arg2 :(id)arg3 :(unsigned short)arg4 :(id)arg5;
- (BOOL)execCommand:(id)arg1 userInterface:(BOOL)arg2 value:(id)arg3;
- (BOOL)execCommand:(id)arg1 userInterface:(BOOL)arg2;
- (BOOL)execCommand:(id)arg1;
- (BOOL)queryCommandEnabled:(id)arg1;
- (BOOL)queryCommandIndeterm:(id)arg1;
- (BOOL)queryCommandState:(id)arg1;
- (BOOL)queryCommandSupported:(id)arg1;
- (id)queryCommandValue:(id)arg1;
- (id)getElementsByName:(id)arg1;
- (id)elementFromPoint:(NSInteger)arg1 y:(NSInteger)arg2;
- (id)createCSSStyleDeclaration;
- (id)getComputedStyle:(id)arg1 pseudoElement:(id)arg2;
- (id)getComputedStyle:(id)arg1 :(id)arg2;
- (id)getMatchedCSSRules:(id)arg1 pseudoElement:(id)arg2;
- (id)getMatchedCSSRules:(id)arg1 pseudoElement:(id)arg2 authorOnly:(BOOL)arg3;
- (id)getElementsByClassName:(id)arg1;
- (id)querySelector:(id)arg1;
- (id)querySelectorAll:(id)arg1;
- (id)createTouch:(id)arg1 target:(id)arg2 identifier:(NSInteger)arg3 pageX:(NSInteger)arg4 pageY:(NSInteger)arg5 screenX:(NSInteger)arg6 screenY:(NSInteger)arg7;
- (id)createTouchList;
- (id)_createRangeWithNode:(id)arg1;
- (id)_documentRange;
- (id)webFrame;
- (id)URLWithAttributeString:(id)arg1;
- (id)head;
- (struct __DDScanQuery { }*)dd_createScanQuery;
- (void)dd_urlifyResults:(id)arg1 operation:(id)arg2;
- (void)dd_resetResults;

@end
