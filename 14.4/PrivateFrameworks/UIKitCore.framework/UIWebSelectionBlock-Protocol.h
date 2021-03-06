//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class DOMDocument, DOMNode, DOMRange, WebFrame;
@protocol UIWebSelectionBlock;

@protocol UIWebSelectionBlock <NSObject>
- (DOMDocument *)enclosingDocument;
- (DOMRange *)rangeOfContents;
- (_Bool)canShrinkDirectlyToTextOnly;
- (_Bool)containsRange:(DOMRange *)arg1;
- (DOMRange *)asDomRange;
- (DOMNode *)asDomNode;
- (_Bool)selectable;
- (_Bool)rendersAsBlock;
- (_Bool)strictlyContainsBlock:(id <UIWebSelectionBlock>)arg1;
- (_Bool)containsBlock:(id <UIWebSelectionBlock>)arg1;
- (_Bool)isSameBlock:(id <UIWebSelectionBlock>)arg1;
- (id <UIWebSelectionBlock>)largerParent;
- (id <UIWebSelectionBlock>)parentBlock;
- (struct CGRect)boundingRectAndInsideFixedPosition:(int *)arg1;
- (struct CGRect)boundingRect;
- (WebFrame *)webFrame;
@end

