//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DOMElement, NSString, UIImage, UIWebView;

@interface SUDOMElement : NSObject
{
    DOMElement *_element;
    UIImage *_image;
    UIWebView *_webView;
}

+ (struct CGRect)frameForDOMElement:(id)arg1;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) DOMElement *element; // @synthesize element=_element;
- (struct CGRect)_frame;
- (void)setProperty:(id)arg1 value:(id)arg2;
- (id)newLabelForElementWithText:(id)arg1;
- (id)newImageView;
@property(readonly, nonatomic) NSString *innerText;
@property(readonly, nonatomic) UIImage *imageRepresentation;
@property(readonly, nonatomic) struct CGRect frame;
- (void)dealloc;
- (id)initWithDOMElement:(id)arg1;

@end

