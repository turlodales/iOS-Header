//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMStyleSheet, NSString, NSURL;

@interface DOMHTMLLinkElement : DOMHTMLElement
{
}

- (id)relList;
@property(readonly, copy) NSURL *absoluteLinkURL;
@property(readonly) DOMStyleSheet *sheet;
- (void)setCrossOrigin:(id)arg1;
- (id)crossOrigin;
- (void)setAs:(id)arg1;
- (id)as;
@property(copy) NSString *type;
@property(copy) NSString *target;
@property(copy) NSString *rev;
@property(copy) NSString *rel;
@property(copy) NSString *media;
@property(copy) NSString *hreflang;
@property(copy) NSString *href;
@property(copy) NSString *charset;
@property _Bool disabled;
- (_Bool)_mediaQueryMatches;
- (_Bool)_mediaQueryMatchesForOrientation:(int)arg1;

@end

