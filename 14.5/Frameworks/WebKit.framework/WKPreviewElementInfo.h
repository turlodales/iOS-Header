//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>

@class NSURL;

@interface WKPreviewElementInfo : NSObject <NSCopying>
{
    struct RetainPtr<NSURL> _linkURL;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *linkURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithLinkURL:(id)arg1;

@end

