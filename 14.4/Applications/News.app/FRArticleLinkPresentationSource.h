//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIActivityItemLinkPresentationSource-Protocol.h"

@class NSString, NSURL;
@protocol FCHeadlineProviding;

@interface FRArticleLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource>
{
    NSString *_title;
    NSURL *_url;
    NSURL *_contentURL;
    id <FCHeadlineProviding> _headline;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
@property(readonly, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)initWithTitle:(id)arg1 appleNewsURL:(id)arg2 headline:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

